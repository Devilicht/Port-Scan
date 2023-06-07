#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(int argc, char *argv[]) {
    int mysoc;
    int conn;
    int port;
    int init = 0;
    int final = 65536;
    char *destiny;
    destiny = argv[1];

    struct sockaddr_in target;

    for( port = init; port<final; port++ ){
        mysoc = socket(AF_INET, SOCK_STREAM, 0);
        target.sin_family = AF_INET;
        target.sin_port = htons(port);
        target.sin_addr.s_addr = inet_addr(destiny);

        conn = connect(mysoc, (struct sockaddr *)&target, sizeof target);

        if(conn = 0){
            printf("Port %d - Status [Open] \n", port);
            close(mysoc);
            close(conn);
        }
        else{
            close(mysoc);
            close(conn);
        }
    }

}
