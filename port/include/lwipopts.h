#pragma once
#include <FreeRTOS.h>
#include <task.h>

#define LWIP_IPV4 1
#define LWIP_IPV6 0

#define NO_SYS 0
#define LWIP_SOCKET 0
#define LWIP_NETCONN 0

#define LWIP_STATS 0
#define LWIP_DNS 1
#define LWIP_DHCP 1

#define LWIP_TCP 1
#define LWIP_UDP 1
#define LWIP_RAW 1

/* Memory settings */
#define MEM_ALIGNMENT 4
#define MEM_SIZE (4 * 1024)

/* PBUF settings */
#define PBUF_POOL_SIZE 8
#define PBUF_POOL_BUFSIZE 1536

#define LWIP_CHKSUM_ALGORITHM 3

/* Threading settings for FreeRTOS */
#define TCPIP_THREAD_STACKSIZE 1024
#define TCPIP_THREAD_PRIO (configMAX_PRIORITIES - 2)
#define DEFAULT_THREAD_STACKSIZE 512
#define LWIP_COMPAT_MUTEX 0

#define SYS_LIGHTWEIGHT_PROT 1

/* Debugging */
#ifdef FURI_DEBUG
#define LWIP_DEBUG 1
#define TCP_DEBUG LWIP_DBG_ON
#define ETHARP_DEBUG LWIP_DBG_ON
#endif

/* Required for RNDIS/CDC-ECM */
#define LWIP_ETHERNET 1
#define LWIP_ARP 1
#define LWIP_ACD 0
#define LWIP_DHCP_DOES_ACD_CHECK 0
