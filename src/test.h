#ifndef __TEST_H_
#define __TEST_H_
#ifdef __cplusplus
extern "C" {
#endif

  typedef struct Arg {
    const wchar_t * name;
	const wchar_t * unit;
    int type;
    int len;
    char  data[32];
	int defcnt;
	const wchar_t *defs[10];
  } Arg_t;


  typedef struct TestProject {
    const wchar_t *name;
    int selectted;
    int status;

    int args_cnt;
    Arg_t *args;

    int outs_cnt;
    int outs_cols;
    Arg_t (*outs)[];

    int chk_cnt;
    Arg_t *chks;

    int (*start)(struct TestProject *);
    int (*stop)(struct TestProject *);
    int (*exec)(struct TestProject *);

	HWND pageCfg;
	HWND pageExcel;
  } TestProject_t;

  enum {
    T_INT = 0,
    T_FLOAT = 1,
  };


int test_init(HINSTANCE hinst, HWND hwnd); 
int test_notify(HWND hwnd, int id, int lparam);
#ifdef __cplusplus
}
#endif
#endif
