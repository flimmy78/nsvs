#ifndef __CTRAPI_H_
#define __CTRAPI_H_

#ifdef __cplusplus
extern "C" {
#endif


  int ctrapi_init(const char *dev, int buad);
  int ctrapi_close(int fd);

  int ctrapi_get_dianzu(float *v);
  
  int ctrapi_get_naiyadianya(float *v);
  int ctrapi_get_naiyadianliu(float *v);
  
  int ctrapi_get_zajianmianji(float *v);
  int ctrapi_get_zajianmianjicha(float *v);
  
  int ctrapi_get_lowpower_dianya(float *v);
  int ctrapi_get_lowpower_dianliu(float *v);
  int ctrapi_get_lowpower_gonglv(float *v);
  
  int ctrapi_get_duzhuan_dianliu(float *v);
  
  int ctrapi_get_kongzai_dianya(float *v);
  int ctrapi_get_kongzai_dianliu(float *v);
  int ctrapi_get_kongzai_gonglv(float *v);
  int ctrapi_get_kongzai_zhuansu(float *v);
  int ctrapi_get_kongzai_wendu(float *v);
  
#ifdef __cplusplus
}
#endif
#endif
