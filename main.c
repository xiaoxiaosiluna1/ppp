#include <stdio.h>

int main(){
    int qian=0;

    printf("jinruqianbaoguanlixitong");
    while(1){
        printf("1---cunqian\n");
        printf("2---quqian\n");
        printf("3---yue\n");
        printf("4---tuichu\n");
        printf("qingxuanzexiangyinggongneng");
        int code;
        scanf("%d",&code);
        if(code == 1){
            printf("jinrunqiangongneng,qingshuruyaocunrudejine:\n");
            int cun;
            scanf("%d",&cun);
            qian +=cun;
            printf("cunruchenggong,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 2){
         printf("jinruquqianggongneng,qingshuruyaoqudejine:\n");
         int qu;
         scanf("%d",&qu);
         if(qian>=qu){
             qian-=qu;
             printf("quqianchenggong,dianjihuichejixu\n");
             char x;
             scanf("%c",&x);
             scanf("%c",&x);
         }
         else{
             printf("yuebuzu,dianjihuichejixu\n");
             char x;
             scanf("%c",&x);
             scanf("%c",&x);
         }   
        }
        }

   

    return 0;

}