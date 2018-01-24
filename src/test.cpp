#include "stdafx.h"


#include "test.h"
#include "resource.h"
#include <commctrl.h> 

#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])

static Arg_t  rzdz_args[] ={
	{TEXT("总运行时间\x0"), TEXT("分钟"), T_INT, 4, {0}, 2, {TEXT("100"), TEXT("2000")}},

};
static Arg_t rzdz_chks[] = {
  {L"电阻基准\x0", TEXT("伏特"), T_FLOAT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"电阻百分比\x0", TEXT("百分之一"), T_FLOAT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},
};

static Arg_t ny_args[] = {
  {L"总运行时间\x0", TEXT("分钟"), T_INT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},  
};

static Arg_t ny_chks[] ={
  {L"匝间电流基准\x0", TEXT("安培"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"匝间电流百分比\x0", TEXT("百分之一"), T_FLOAT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},
};

static Arg_t zj_args[] = {
    {L"总运行时间\x0", TEXT("分钟"), T_INT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},  
};
static Arg_t zj_chks[] = {
  {L"匝间面积基准\x0", TEXT("平方米"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"匝间面积百分比\x0", TEXT("百分之一"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"匝间面积差基准\x0", TEXT("平方米"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"匝间面积差百分比\x0", TEXT("百分之一"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
};

static Arg_t dzdl_args[] = {
    {L"总运行时间\x0", TEXT("分钟"), T_INT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},    
};
static Arg_t dzdl_chks[] = {
  {L"堵转电流基准\x0", TEXT("安培"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"堵转电流百分比\x0", TEXT("百分之一"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
};

static Arg_t ddyqd_args[] = {
  {L"总运行时间\x0", TEXT("分钟"), T_INT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},    
};
static Arg_t ddyqd_chks[] = {
  {L"电流基准\x0", TEXT("安培"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"电流百分比\x0", TEXT("百分之一"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"电压基准\x0", TEXT("伏特"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"电压百分比\x0", TEXT("百分之一"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
};

static Arg_t kz_args[] = {
  {L"加载电压\x0", TEXT("伏特"), T_FLOAT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"总运行时间\x0", TEXT("分钟"), T_INT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"循环内运行时间\x0", TEXT("分钟"), T_INT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"循环内停止时间\x0", TEXT("分钟"), T_INT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"数据采集时间间隔\x0", TEXT("秒"), T_INT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},  
};
static Arg_t kz_chks[] = {
  {L"电流基准\x0", TEXT("分钟"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"电流百分比\x0", TEXT("百分之一"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"功率基准\x0", TEXT("瓦"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"功率百分比\x0", TEXT("百分之一"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"转速基准\x0", TEXT("转/秒"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"转速百分比\x0", TEXT("百分之一"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"温度基准\x0", TEXT("摄氏度"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"温度百分比\x0", TEXT("百分之一"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},  
};
static Arg_t fz_args[] = {
  {L"加载电压\x0", TEXT("伏特"), T_FLOAT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"总运行时间\x0", TEXT("分钟"), T_INT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"循环内运行时间\x0", TEXT("分钟"), T_INT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"循环内停止时间\x0", TEXT("分钟"), T_INT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"数据采集时间间隔\x0", TEXT("秒"), T_INT, 4, {0}, 2, {TEXT("1000"), TEXT("2000")}},  
};
static Arg_t fz_chks[] = {
  {L"电流基准\x0", TEXT("安培"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"电流百分比\x0", TEXT("百分之一"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"功率基准\x0", TEXT("瓦"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"功率百分比\x0", TEXT("百分之一"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"转速基准\x0", TEXT("转/秒"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"转速百分比\x0", TEXT("百分之一"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"温度基准\x0", TEXT("摄氏度"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},
  {L"温度百分比\x0", TEXT("百分之一"), T_FLOAT, 4,{0}, 2, {TEXT("1000"), TEXT("2000")}},  
};


static int rzdz_start(TestProject_t*);
static int rzdz_stop(TestProject_t*);
static int rzdz_exec(TestProject_t*);


static int ny_start(TestProject_t*);
static int ny_stop(TestProject_t*);
static int ny_exec(TestProject_t*);

static int zj_start(TestProject_t*);
static int zj_stop(TestProject_t*);
static int zj_exec(TestProject_t*);

static int dzdl_start(TestProject_t*);
static int dzdl_stop(TestProject_t*);
static int dzdl_exec(TestProject_t*);

static int ddyqd_start(TestProject_t*);
static int ddyqd_stop(TestProject_t*);
static int ddyqd_exec(TestProject_t*);

static int kz_start(TestProject_t*);
static int kz_stop(TestProject_t*);
static int kz_exec(TestProject_t*);

static int fz_start(TestProject_t*);
static int fz_stop(TestProject_t*);
static int fz_exec(TestProject_t*);

static TestProject_t tps[] = {
  {
    L"绕组电阻测试\x0",  0, 0,
    ARRAY_SIZE(rzdz_args), rzdz_args,
    0, 0, NULL,
    ARRAY_SIZE(rzdz_chks), rzdz_chks,
    rzdz_start, rzdz_stop, rzdz_exec,
  },
  
  {
    L"耐压测试\x0", 0,0,
    ARRAY_SIZE(ny_args),ny_args,
    0, 0, NULL,
    ARRAY_SIZE(ny_chks), ny_chks,
    ny_start, ny_stop, ny_exec
  },

    {
    L"匝间测试\x0",  0, 0,
    ARRAY_SIZE(zj_args), zj_args,
    0, 0, NULL,
    ARRAY_SIZE(zj_chks), zj_chks,
    zj_start, zj_stop, zj_exec,
  },

  {
    L"堵转电流测试\x0",  0, 0,
    ARRAY_SIZE(dzdl_args), dzdl_args,
    0, 0, NULL,
    ARRAY_SIZE(dzdl_chks), dzdl_chks,
    dzdl_start, dzdl_stop, dzdl_exec,
  },

  {
    L"底电压启动测试\x0",  0, 0,
    ARRAY_SIZE(ddyqd_args), ddyqd_args,
    0, 0, NULL,
    ARRAY_SIZE(ddyqd_chks), ddyqd_chks,
    ddyqd_start, ddyqd_stop, ddyqd_exec,
  },

    {
    L"空载测试\x0",  0, 0,
    ARRAY_SIZE(kz_args), kz_args,
    0, 0, NULL,
    ARRAY_SIZE(kz_chks), kz_chks,
    kz_start, kz_stop, kz_exec,
  },

  {
    L"负载测试\x0",  0, 0,
    ARRAY_SIZE(fz_args), fz_args,
    0, 0, NULL,
    ARRAY_SIZE(fz_chks), fz_chks,
    fz_start, fz_stop, fz_exec,
  },  

};



static int rzdz_start(TestProject_t*) {
  return 0;
}
static int rzdz_stop(TestProject_t*){
  return 0;
}
static int rzdz_exec(TestProject_t*){
  return 0;
}

static int ny_start(TestProject_t*){
  return 0;
}
static int ny_stop(TestProject_t*){
  return 0;
}
static int ny_exec(TestProject_t*){
  return 0;
}

static int zj_start(TestProject_t*){
  return 0;
}
static int zj_stop(TestProject_t*){
  return 0;
}
static int zj_exec(TestProject_t*){
  return 0;
}

static int dzdl_start(TestProject_t*){
  return 0;
}
static int dzdl_stop(TestProject_t*){
  return 0;
}
static int dzdl_exec(TestProject_t*){
  return 0;
}

static int ddyqd_start(TestProject_t*){
  return 0;
}
static int ddyqd_stop(TestProject_t*){
  return 0;
}
static int ddyqd_exec(TestProject_t*){
  return 0;
}

static int kz_start(TestProject_t*){
  return 0;
}
static int kz_stop(TestProject_t*){
  return 0;
}
static int kz_exec(TestProject_t*){
  return 0;
}

static int fz_start(TestProject_t*){
  return 0;
}
static int fz_stop(TestProject_t*){
  return 0;
}
static int fz_exec(TestProject_t*){
  return 0;
}
int _test_init_project(TestProject_t *tp, HINSTANCE hinst, HWND hPageCfg, HWND hPageExcel) {


	


	int x = 10;
	int y = 20;
	int xstep = 60;
	int ystep = 30;

	int icnt = tp->args_cnt;
	int i = 0;
	for (i = 0; i < icnt; i++) {
		Arg_t *a = &tp->args[i];
		CreateWindow(TEXT("static"), a->name,
			WS_CHILD|WS_VISIBLE|SS_LEFT, 
			x,y,120,20,
			hPageCfg, NULL, NULL, NULL);
		/*
		CreateWindow(TEXT("edit"),	NULL,			
			WS_CHILD|WS_VISIBLE|WS_BORDER,
			x+120,y,80,20, 
			hPageCfg, NULL, NULL, NULL);
		*/
		HWND hCombo = CreateWindow(TEXT("COMBOBOX"), NULL,
			CBS_DROPDOWN|WS_CHILD|WS_VSCROLL|WS_VISIBLE,
			x+120,y,80,100,
			hPageCfg, NULL, NULL, NULL);
		int k = 0; 
		int kcnt = a->defcnt;
		for (k = 0; k < kcnt; k++) {
			SendMessage(hCombo, CB_ADDSTRING, k, (LPARAM)a->defs[k]);
		}
		SendMessage(hCombo, CB_SETCURSEL, 0, 0);
		//SetWindowText(hCombo, TEXT("1000"));
		CreateWindow(TEXT("static"), a->unit, 
			WS_CHILD|WS_VISIBLE|SS_LEFT, 
			x+220,y,80,20,
			hPageCfg, NULL, NULL, NULL);

		y += ystep; 
	}

	

	icnt = tp->chk_cnt;
	i = 0;
	for (i = 0; i < icnt; i++) {
		Arg_t *a = &tp->chks[i];
		CreateWindow(TEXT("static"), a->name, 
			WS_CHILD|WS_VISIBLE|SS_LEFT, 
			x,y,120,20,
			hPageCfg, NULL, NULL, NULL);
		/*
		CreateWindow(TEXT("edit"),	NULL,			
			WS_CHILD|WS_VISIBLE|WS_BORDER,
			x+120,y,80,20, 
			hPageCfg, NULL, NULL, NULL);
		*/
		HWND hCombo = CreateWindow(TEXT("COMBOBOX"), NULL,
			CBS_DROPDOWN|WS_CHILD|WS_VSCROLL|WS_VISIBLE|CBS_SORT|WS_TABSTOP,
			x+120,y,80,100,
			hPageCfg, NULL, NULL, NULL);

		int k = 0; 
		int kcnt = a->defcnt;
		for (k = 0; k < kcnt; k++) {
			SendMessage(hCombo, CB_ADDSTRING, k, (LPARAM)a->defs[k]);
		}
		SendMessage(hCombo, CB_SETCURSEL, 0, 0);
		//SetWindowText(hCombo, TEXT("1000"));

		CreateWindow(TEXT("static"), a->unit, 
			WS_CHILD|WS_VISIBLE|SS_LEFT, 
			x+220,y,80,20,
			hPageCfg, NULL, NULL, NULL);
		y += ystep; 

	}

	//创建listview  
	RECT rcExcel;
	GetClientRect(hPageExcel, &rcExcel);
	HWND listview1 = CreateWindowEx(WS_EX_STATICEDGE, TEXT("SysListView32"), NULL,
				WS_CHILD | WS_VISIBLE | LVS_REPORT | LVS_SINGLESEL,
				0, 0, rcExcel.right - rcExcel.left, rcExcel.bottom - rcExcel.top, 
				hPageExcel, (HMENU)1, hinst, NULL);  
	ListView_SetExtendedListViewStyle(listview1, LVS_EX_FULLROWSELECT | LVS_EX_SUBITEMIMAGES);//设置listview扩展风格  
	SendMessage(listview1, WM_SETFONT, (WPARAM)GetStockObject(17), 0);  


	//SetWindowTheme(listview1, L"Explorer", NULL);  

	//创建图片列表 
	//HIMAGELIST imglist1;  
	//imglist1 = ImageList_Create(20, 20, ILC_MASK, 1, 1);  
	//ImageList_AddIcon(imglist1, LoadIcon((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), TEXT("ICON_2")));  
	//ImageList_AddIcon(imglist1, LoadIcon((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), TEXT("ICON_1")));  
	//ListView_SetImageList(listview1, imglist1, LVSIL_SMALL);  

	//创建列头
	LVCOLUMN list1;  
	RtlZeroMemory(&list1, sizeof(LVCOLUMN));  
	list1.mask = LVCF_FMT | LVCF_WIDTH | LVCF_TEXT;//掩码  
	list1.fmt = LVCFMT_LEFT;//左对齐  
	list1.cx = 100;//列宽  
	icnt = tp->args_cnt;
	i = 0;
	for (i = 0; i < icnt; i++) {
		Arg_t *a = &tp->args[i];
		list1.pszText = (LPWSTR)a->name;  
		SendMessage(listview1, LVM_INSERTCOLUMN, 0, (LPARAM)&list1);//创建列  
	}
	icnt = tp->chk_cnt;
	i = 0;
	for (i = 0; i < icnt; i++) {
		Arg_t *a = &tp->chks[i];
		list1.pszText = (LPWSTR)a->name;  
		SendMessage(listview1, LVM_INSERTCOLUMN, 0, (LPARAM)&list1);//创建列  
	}	
	/*
	list1.pszText = TEXT("Win32");  
	list1.cx = 200;  
	SendMessage(listview1, LVM_INSERTCOLUMN, 1, (LPARAM)&list1);  
	
	list1.pszText = TEXT("MSDN");  
	SendMessage(listview1, LVM_INSERTCOLUMN, 2, (LPARAM)&list1);  
	
	list1.pszText = TEXT("happy");  
	SendMessage(listview1, LVM_INSERTCOLUMN, 3, (LPARAM)&list1);  
	*/
	
	/*
	//创建项目  
	LVITEM item1;  
	RtlZeroMemory(&item1, sizeof(LVITEM));  
	//item1.mask = LVIF_TEXT | LVIF_IMAGE | LVIF_INDENT;  
	item1.mask = LVIF_TEXT | LVIF_INDENT;  
	item1.pszText = TEXT("Project");  
	item1.iItem = 0;//项目号  
	//item1.iImage = 0;//图片号  
	item1.iIndent = 0;  
	SendMessage(listview1, LVM_INSERTITEM, 0, (LPARAM)&item1);  
	
	item1.iItem = 1;  
	//item1.iImage = 0;  
	SendMessage(listview1, LVM_INSERTITEM, 0, (LPARAM)&item1);  
	
	item1.pszText = TEXT("3");  
	item1.iItem = 2;  
	//item1.iImage = 1;  
	item1.iIndent = 1;//缩进一个图像单位  
	SendMessage(listview1, LVM_INSERTITEM, 0, (LPARAM)&item1);  

	//创建子项  
	//item1.mask = LVIF_TEXT | LVIF_IMAGE;  
	item1.mask = LVIF_TEXT;  
	item1.iItem = 1;  
	item1.iSubItem = 1;  
	item1.iImage = -1;  
	item1.pszText = TEXT("SubItem");  
	SendMessage(listview1, LVM_SETITEM, 0, (LPARAM)&item1);  
	item1.iItem = 1;  
	item1.iSubItem = 2;  
	item1.pszText = TEXT("SubItem");  
	SendMessage(listview1, LVM_SETITEM, 0, (LPARAM)&item1);  
	item1.iItem = 1;  
	item1.iSubItem = 3;  
	item1.pszText = TEXT("SubItem");  
	SendMessage(listview1, LVM_SETITEM, 0, (LPARAM)&item1);  
	*/
	return 0;
}
HWND current1 = NULL;
HWND current2 = NULL;
int test_init_project(TestProject_t *tp, int i, HINSTANCE hinst, wchar_t* clsname, HWND hwndCfg, HWND hwndExcel) {
	
	RECT rcCfg;
	RECT rcExcel;
	GetClientRect(hwndCfg, &rcCfg);
	GetClientRect(hwndExcel, &rcExcel);

	int xCfg = rcCfg.left;
	int yCfg = rcCfg.top+21;
	int wCfg = rcCfg.right - rcCfg.left;
	int hCfg = rcCfg.bottom - rcCfg.top-8;

	int style = WS_CHILD|WS_BORDER|DS_SETFONT;
	if (i == 0) style |= WS_VISIBLE;

	HWND hPageCfg = CreateWindow(	clsname,
					TEXT("x"),
					style,
					xCfg, yCfg, wCfg, hCfg,
					hwndCfg, 
					NULL, //menu
					hinst, //instance
					NULL); //lparam
	if (i == 0) current1 = hPageCfg;
	tp->pageCfg = hPageCfg;

					

	TCITEM ti = {0};  
	ti.mask = TCIF_TEXT | TCIF_PARAM;  
	ti.pszText = (LPWSTR)tp->name;
	ti.cchTextMax = wcslen(tp->name); 
	ti.lParam = (LPARAM)tp;
	TabCtrl_InsertItem(hwndCfg, i, &ti);
	

	int xExcel = rcExcel.left;
	int yExcel = rcExcel.top+21;
	int wExcel = rcExcel.right - rcExcel.left;
	int hExcel = rcExcel.bottom - rcExcel.top - 8;
	


	
	HWND hPageExcel = CreateWindow(	clsname,
					TEXT("x"),
					style,
					xExcel, yExcel, wExcel, hExcel,
					hwndExcel, 
					NULL,
					hinst,
					NULL);
	if (i == 0) current2 = hPageExcel;
	tp->pageExcel = hPageExcel;

	ti.mask = TCIF_TEXT | TCIF_PARAM;  
	ti.pszText = (LPWSTR)tp->name;
	ti.cchTextMax = wcslen(tp->name); 
	ti.lParam = (LPARAM)tp;
	TabCtrl_InsertItem(hwndExcel, i, &ti);


	_test_init_project(tp, hinst, hPageCfg, hPageExcel);

	return 0;

}

int test_init(HINSTANCE hinst, HWND hwnd) {
	HWND hwndCfg = GetDlgItem(hwnd, IDT_CFG);
	HWND hwndExcel = GetDlgItem(hwnd, IDT_EXCEL);
	wchar_t clsname[64];
	GetClassName(hwnd,clsname, sizeof(clsname)/sizeof(clsname[0]));


	int icnt = ARRAY_SIZE(tps);
	int i = 0;
	for (i = 0; i < icnt; i++) {
		TestProject_t *tp = &tps[i];
		test_init_project(tp, i, hinst, clsname, hwndCfg, hwndExcel);
	}
	return 0;
}

#include <stdio.h>
int test_notify(HWND hwnd, int id, int lparam) {
	int code = ((LPNMHDR)lparam)->code;
	HWND hwndTab = GetDlgItem(hwnd, id);

	//MessageBox(0, 0, 0, 0);
	if (code == TCN_SELCHANGE) {
		int sel=TabCtrl_GetCurSel(hwndTab);
		TC_ITEM ti;
		TabCtrl_GetItem(hwndTab, sel, &ti);
		TestProject_t *tp = (TestProject_t*)ti.lParam;
		
		//char buf[32];
		//sprintf(buf, "%d", sel);
		//MessageBoxA(NULL, buf, buf, 0);
		
		if (id == IDT_CFG) {
			ShowWindow(tp->pageCfg,TRUE);
			ShowWindow(current1,FALSE);
			current1 = tp->pageCfg;
		} else if (id == IDT_EXCEL) {
			ShowWindow(tp->pageExcel,TRUE);
			ShowWindow(current2,FALSE);
			current2 = tp->pageExcel;
		}
	}
	return 0;
}