#include <stdio.h>

typedef unsigned char BYTE;
typedef unsigned short WORD;

union {
  struct {
    WORD ax, bx, cx, dx;
  } word;
  struct {
    BYTE al, ah, bl, bh, cl, ch, dl, dh;
  } byte;
} regs;

int main(void)
{
  regs.byte.ah = 0x12;
  regs.byte.al = 0x34;

  printf("AX : 0x%hx\n", regs.word.ax);
}
