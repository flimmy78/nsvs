#include "stdafx.h"
#include "nsvs.h"

#include "test.h"
#include <stdio.h>
#include <stdlib.h>
#include "commctrl.h"

HINSTANCE g_hinst = NULL;
HWND g_hwnd = NULL;

INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);
INT_PTR CALLBACK DialogProc(HWND hwndDlg,UINT uMsg,WPARAM wParam,LPARAM lParam);

//int APIENTRY _tWinMain(HINSTANCE hInstance,
int APIENTRY wWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow) {
  UNREFERENCED_PARAMETER(hPrevInstance);
  UNREFERENCED_PARAMETER(lpCmdLine);
  UNREFERENCED_PARAMETER(nCmdShow);

  g_hinst = hInstance;
  
  int ret = DialogBox(NULL, MAKEINTRESOURCE(IDD_MAIN2), NULL, DialogProc);
  if (ret < 0) {
    MessageBox(NULL, L"Error", L"XXX", 0);
  }
}

INT_PTR CALLBACK DialogProc(HWND hwndDlg,UINT uMsg,WPARAM wParam,LPARAM lParam) {
	HWND hwnd = NULL;
	switch (uMsg) {
  case WM_INITDIALOG:
	  g_hwnd = hwndDlg;

	  test_init(g_hinst, g_hwnd);


	  return TRUE;
  case WM_CLOSE:
	  EndDialog(hwndDlg, 0);
	  return TRUE;
  case WM_COMMAND:
	  {
		  int wmId    = LOWORD(wParam); 
		  int wmEvent = HIWORD(wParam);
		  if (wmId == IDM_ABOUT) {
			  DialogBox(g_hinst, MAKEINTRESOURCE(IDD_ABOUTBOX), g_hwnd, About);
			  return TRUE;
		  } else if (wmId == IDM_EXIT) {
			  EndDialog(hwndDlg, 0);
			  return TRUE;
		  } else  {/*
		   switch (wmId) {
		   case BTN_START:
		   return TRUE;
		   case BTN_STOP:
		   return TRUE;
		   default:
		   break;
		   }
		   */
			  //if (wmEvent == CBN_SELCHANGE) {
				//	MessageBox(0, 0, 0, 0);  
				//}
		  }
		  
	  }
	  break;
  case WM_NOTIFY:
	  {
			int wmId    = LOWORD(wParam); 
			int wmEvent = HIWORD(lParam);
			if (wmId == IDT_CFG || wmId == IDT_EXCEL) {
				test_notify(g_hwnd, wmId, lParam);
			}

	  }
	  break;
	}
	return FALSE;
}
  


INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam) {
  UNREFERENCED_PARAMETER(lParam);
  switch (message) {
  case WM_INITDIALOG:
    return (INT_PTR)TRUE;

  case WM_COMMAND:
    if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL) {
      EndDialog(hDlg, LOWORD(wParam));
      return (INT_PTR)TRUE;
    }
    break;
  }
  return (INT_PTR)FALSE;
}
