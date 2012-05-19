/* Program z funkcj¹ rectinrect sprawdzaj¹c¹, czy prostok¹t jest zawarty wewn¹trz prostok¹ta */

#include <stdio.h>

struct point {
  int x;
  int y;
};

struct rect {
  struct point ll; /* lower left */
  struct point ur; /* upper right */
};

struct point makepoint(int x, int y) {
  struct point tmp;
  tmp.x = x;
  tmp.y = y;
  return tmp;
}

/* ptinrect: zwróæ 1 jeœli p nale¿y do r, 0 jeœli nie nale¿y */
int ptinrect(struct point p, struct rect r) {
  return p.x >= r.ll.x && p.x < r.ur.x
      && p.y >= r.ll.y && p.y < r.ur.y;
}

/* rectinrect: zwróæ 1 jeœli r1 jest zawarty w r2, 0
— w przeciwnym przypadku */
int rectinrect(struct rect r1, struct rect r) {
  struct point ll = r1.ll;
  struct point ur = r1.ur;
  return ptinrect(ll, r) && ptinrect(ur, r);
};

int main(int argc, char *argv[]) {
  int ans;
  // struct point point22 = { 2, 2 };
  // struct point point26 = { 2, 6 };
  struct point point22 = makepoint(2, 2);
  struct point point26 = makepoint(2, 6);
  struct rect rect2265 = { {2, 2}, {6, 5} };
  struct rect rect2253 = { {2, 2}, {5, 3} };

  printf(" \npoint22: punkt o wspolrzednych 2,2\n rect: pkt ll i pkt ur\n rect2265: prostokat w pktach ll 2,2 i ur 6,5\n\n");

  printf(" point22: %d %d\n", point22.x, point22.y);
  printf(" rect: %d %d i %d %d\n",
    rect2265.ll.x, rect2265.ll.y, rect2265.ur.x, rect2265.ur.y);

  ans = ptinrect(point22, rect2265);
  printf(" point22 in rect2265: %d\n", ans);

  ans = ptinrect(point26, rect2265);
  printf(" point26 in rect2265: %d\n", ans);

  ans = rectinrect(rect2253, rect2265);
  printf(" rect2253 in rect2265: %d\n", ans);

  return 0;
}
  