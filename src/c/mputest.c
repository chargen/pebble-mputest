#include <pebble.h>

int main(void) {
  volatile uint32_t *p = (volatile uint32_t *)0x20000000;
  APP_LOG(APP_LOG_LEVEL_DEBUG, "ok, here we go: can we prod at system RAM?");
  APP_LOG(APP_LOG_LEVEL_DEBUG, "0x20000000 = %08lx", *p);
  uint32_t old = *p;
  *p = 0;
  APP_LOG(APP_LOG_LEVEL_DEBUG, "0x20000000 is *now* %08lx", *p);
  *p = old;
}
