#ifndef __SERIAL_H_
#define __SERIAL_H_
#ifdef __cplusplus
extern "C" {
#endif


int serial_init(const char *dev, int buad);
int serial_close(int fd);
int serial_read(int fd, char *buf, int size, int s, int m);
int serial_write(int fd, char *buf, int size, int s, int m);
int serial_flush(int fd);


#ifdef __cplusplus
}
#endif
#endif
