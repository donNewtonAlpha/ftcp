#include <stdio.h>
#include <sys/socket.h>
#include <linux/if_packet.h>
#include <net/ethernet.h> /* the L2 protocols */
#include "ftcp.h"



int main() {
    printf("Hello, World!\n");
    unsigned char *buffer = (unsigned char *)malloc(65536);

    int ftcp_soc;
    ftcp_soc = socket(AF_PACKET, SOCK_RAW, 140);
    printf("Error NUM : %d\n",ftcp_soc);
    return 0;
}
