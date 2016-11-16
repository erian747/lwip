#include "mqtt/test_mqtt_client.h"

#include "lwip/pbuf.h"
#include "lwip/tcp.h"
#include "lwip/apps/mdns.h"
#include "lwip/apps/mdns_priv.h"


START_TEST(connect_broker)
{
  mqtt_connect()
  
    
  /*
  static const u8_t data[] = { 0x05, 'm', 'u', 'l', 't', 'i', 0x04, 'c', 'a', 's', 't', 0x00 };
  struct pbuf *p;
  struct mdns_domain domain;
  u16_t offset;

  p = pbuf_alloc(PBUF_RAW, sizeof(data), PBUF_ROM);
  p->payload = (void *)(size_t)data;
  fail_if(p == NULL);
  offset = mdns_readname(p, 0, &domain);
  pbuf_free(p);
  fail_unless(offset == sizeof(data));
  fail_unless(domain.length == sizeof(data));
  fail_if(memcmp(&domain.name, data, sizeof(data)));
  */
}
END_TEST



Suite* mqtt_client_suite(void)
{
  testfunc tests[] = {
    TESTFUNC(connect_broker),
/*
    TESTFUNC(readname_anydata),
    TESTFUNC(readname_short_buf),
    TESTFUNC(readname_long_label),
    TESTFUNC(readname_overflow),
    TESTFUNC(readname_jump_earlier),
    TESTFUNC(readname_jump_earlier_jump),
    TESTFUNC(readname_jump_maxdepth),
    TESTFUNC(readname_jump_later),
    TESTFUNC(readname_half_jump),
    TESTFUNC(readname_jump_toolong),
    TESTFUNC(readname_jump_loop_label),
    TESTFUNC(readname_jump_loop_jump),

    TESTFUNC(add_label_basic),
    TESTFUNC(add_label_long_label),
    TESTFUNC(add_label_full),

    TESTFUNC(domain_eq_basic),
    TESTFUNC(domain_eq_diff),
    TESTFUNC(domain_eq_case),
    TESTFUNC(domain_eq_anydata),
    TESTFUNC(domain_eq_length),

    TESTFUNC(compress_full_match),
    TESTFUNC(compress_full_match_subset),
    TESTFUNC(compress_full_match_jump),
    TESTFUNC(compress_no_match),
    TESTFUNC(compress_2nd_label),
    TESTFUNC(compress_2nd_label_short),
    TESTFUNC(compress_jump_to_jump),
    TESTFUNC(compress_long_match),
*/
};
  return create_suite("MQTT", tests, sizeof(tests)/sizeof(testfunc), NULL, NULL);
}
