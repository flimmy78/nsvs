#include "stdafx.h"

#include "serial.h"


int ctrapi_init(const char *dev, int buad) {
  return serial_init(dev, buad);
}

int ctrapi_close(int fd) {
  return serial_close(fd);
}

int ctrapi_get_dianzu(float *v) {
  if (v == NULL) {
    return -1;
  }
  *v = rand()%1000 / 1000.0f;
  return 0;
}
  
int ctrapi_get_naiyadianya(float *v) {
  if (v == NULL) {
    return -1;
  }
  *v = rand()%1000 / 1000.0f;
  return 0;  
}
int ctrapi_get_naiyadianliu(float *v) {
  if (v == NULL) {
    return -1;
  }
  *v = rand()%1000 / 1000.0f;
  return 0;    
}
  
int ctrapi_get_zajianmianji(float *v) {
  if (v == NULL) {
    return -1;
  }
  *v = rand()%1000 / 1000.0f;
  return 0;  
}
int ctrapi_get_zajianmianjicha(float *v) {
  *v = rand()%1000 / 1000.0f;
  return 0;  
}
  
int ctrapi_get_lowpower_dianya(float *v) {
  if (v == NULL) {
    return -1;
  }
  *v = rand()%1000 / 1000.0f;
  return 0;  
}
int ctrapi_get_lowpower_dianliu(float *v) {
  if (v == NULL) {
    return -1;
  }
  *v = rand()%1000 / 1000.0f;
  return 0;  
}
int ctrapi_get_lowpower_gonglv(float *v) {
  if (v == NULL) {
    return -1;
  }
  *v = rand()%1000 / 1000.0f;
  return 0;  
}
 
int ctrapi_get_duzhuan_dianliu(float *v) {
  if (v == NULL) {
    return -1;
  }
  *v = rand()%1000 / 1000.0f;
  return 0;  
}
  
int ctrapi_get_kongzai_dianya(float *v) {
  if (v == NULL) {
    return -1;
  }
  *v = rand()%1000 / 1000.0f;
  return 0;  
}
int ctrapi_get_kongzai_dianliu(float *v) {
  if (v == NULL) {
    return -1;
  }
  *v = rand()%1000 / 1000.0f;
  return 0;  
}
int ctrapi_get_kongzai_gonglv(float *v) {
  if (v == NULL) {
    return -1;
  }
  *v = rand()%1000 / 1000.0f;
  return 0;  
}
int ctrapi_get_kongzai_zhuansu(float *v) {
  if (v == NULL) {
    return -1;
  }
  *v = rand()%1000 / 1000.0f;
  return 0;  
}
int ctrapi_get_kongzai_wendu(float *v) {
  if (v == NULL) {
    return -1;
  }
  *v = rand()%1000 / 1000.0f;
  return 0;  
}
