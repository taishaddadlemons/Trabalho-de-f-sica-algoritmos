#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main(){
int resp2,resp1;
printf("\nPronto, agora com as suas informacoes, precisamos saber o que desejas descobrir.\nDe acordo com o menu, selecione:");
printf("\n1-MASSA\n2-ACELERACAO\n3-FORCA PESO\n4-COEFICIENTE DE ATRITO ESTATICO\n5-COEFICIENTE DE ATRITO CINETICO\n6-FORCA NORMAL\n7-FORCA APLICADA\n8-TENSAO\n9-FORCA DE CONTATO\n10-FORCA RESULTANTE\n0-PARAR\n");
scanf("%d",&resp2);
while(resp2!=0){
if(resp2==1){
        float m;
    printf("\nExiste atrito:\n1-Sim\n0-Nao\n");
    scanf("%d",&resp1);
    if(resp1==1){
            float ue,fat,cos;
        printf("\nDigite o coeficiente de atrito:");
        scanf("%f",&ue);
        printf("\nDigite a Forca atrito:");
        scanf("%f",&fat);
        printf("\nDigite o COS do angulo:");
        scanf("%f",&cos);
        m=(fat/ue)/10*pow(cos,-1);
        printf("\nO valor de massa e: %g kg",m);
        break;
    }
    if(resp1==0){
            float cos,N;
        printf("\nDigite o COS do angulo:");
        scanf("%f",&cos);
        printf("\nDigite a Forca Normal:");
        scanf("%f",&N);
        m=N*pow(cos,-1)/10;
        printf("\nO valor de massa e: %g kg",m);
        break;
    }

}
if(resp2==2){
    float a;
    printf("\nExiste atrito:\n1-Sim\n0-Nao\n");
    scanf("%d",&resp1);
    if(resp1==1){
        float Fp,fat,N,m,ue,uc;
        printf("\nDigite a Forca Paralela:");
        scanf("%f",&Fp);
        printf("\nDigite a Forca Normal:");
        scanf("%f",&N);
        printf("\nDigite o Coeficiente de Atrito Estatico:");
        scanf("%f",&ue);
        fat=ue*N;
        printf("\nDigite a Massa:");
        scanf("%f",&m);
        if(fat-Fp>=0){
            printf("\nA aceleracao e: 0 m/s2");
            break;}
        else{
            printf("\nDigite o Coeficiente de Atrito Cinetico:");
            scanf("%f",&uc);
            fat=uc*N;
            a=(Fp-fat)/m;
            printf("\nA aceleracao e: %g m/s2",a);
            break;}
    }
    if(resp1==0){
        float sen;
        printf("\nDigite a SEN do angulo:");
        scanf("%f",&sen);
        a=10*sen;
        printf("\nA aceleracao e: %g m/s2",a);
    }
}
if(resp2==3){
        float P,m;
    printf("\nDigite a massa:");
    scanf("%f",&m);
    P=m*10;
    printf("\nA Forca Peso e: %g N",P);
    break;
}
if(resp2==4){
        float fat,ue,N;
    printf("\nDigite a Forca de Atrito Estatica Maxima:");
    scanf("%f",&fat);
    printf("\nDigite a Forca Normal:");
    scanf("%f",&N);
    ue=fat/N;
    printf("\nO Coeficiente de Atrito Estatico e: %g",ue);
    break;
}
if(resp2==5){
        float fat,uc,N;
    printf("\nDigite a Forca de Atrito Cinetico:");
    scanf("%f",&fat);
    printf("\nDigite a Forca Normal:");
    scanf("%f",&N);
    uc=fat/N;
    printf("\nO Coeficiente de Atrito Cinetico e: %g",uc);
    break;
}
if(resp2==6){
    float N,m,cos;
    printf("\nDigite a massa:");
    scanf("%f",&m);
    printf("\nDigite o COS do angulo:");
    scanf("%f",&cos);
    if(cos==0){
        N=m*10;
        printf("\nA Forca Normal e: %g N",N);
        break;
        }
    else{
        N=m*10*cos;
        printf("\nA Forca Normal e: %g N",N);
        break;
        }
}
if(resp2==7){
    float Fap,a,m;
    printf("\nDigite a Massa:");
    scanf("%f",&m);
    printf("\nDigite a Aceleracao:");
    scanf("%f",&a);
    Fap=m*a;
    printf("\nA Forca Aplicada e: %g N",Fap);
    break;
}
if(resp2==8){
        int i,j;
    float m[2],T,a,Fap;
    for(i=0;i<2;i++){
        printf("\nDigite a Massa do objeto %d:",i);
        scanf("%f",&m[i]);
    }

    printf("\nEsta aplicando Forca em qual massa:\n0-massa1\n1-massa2\n3-Ambas massas\n");
    scanf("%d",&j);
    if(j!=3){
    printf("\nDigite a Forca Aplicada:");
        scanf("%f",&Fap);
    if(j==0){
       a=Fap/(m[0]+m[1]);
       T=m[1]*a;
       printf("\nA Tensao e: %g", T);
       break;
    }
    if(j==1){
        a=Fap/(m[0]+m[1]);
        T=m[0]*a;
        printf("\nA Tensao e: %g", T);
        break;
    }
    }
    if(j==3){
        float F2,F1;
        printf("\nDigite a Forca Aplicada 1:");
        scanf("%f",&F1);
        printf("\nDigite a Forca Aplicada 2:");
        scanf("%f",&F2);
        a=(F1-F2)/(m[0]+m[1]);
        T=(m[1]*a)+F2;
        printf("\nA Tensao e: %g", T);
        break;
    }


}
if(resp2==9){
    int i,j;
    float m[2],FC,a,Fap;
    for(i=0;i<2;i++){
        printf("\nDigite a Massa do objeto %d:",i);
        scanf("%f",&m[i]);
    }

    printf("\nEsta aplicando Forca em qual massa:\n0-massa1\n1-massa2\n3-Ambas massas\n");
    scanf("%d",&j);
    if(j!=3){
    printf("\nDigite a Forca Aplicada:");
    scanf("%f",&Fap);
    if(j==0){
       a=Fap/(m[0]+m[1]);
       FC=m[1]*a;
       printf("\nA forca de contato e: %g", FC);
       break;
    }
    if(j==1){
        a=Fap/(m[0]+m[1]);
        FC=m[0]*a;
        printf("\nA forca de contato e: %g", FC);
        break;
    }
    }
    if(j==3){
        float F2,F1;
        printf("\nDigite a Forca Aplicada 1:");
        scanf("%f",&F1);
        printf("\nDigite a Forca Aplicada 2:");
        scanf("%f",&F2);
        a=(F1-F2)/(m[0]+m[1]);
        FC=(m[1]*a)+F2;
        printf("\nA forca de contato e: %g", FC);
        break;
    }
}
if(resp2==10){
    float Fr,m,a;
    int resp1;
    printf("\nQuantos objetos sao:\n1-1 objeto\n2-2 objetos\n");
    scanf("%d",&resp1);
    if(resp1==1){
        printf("\nExiste atrito:\n1-Sim\n0-Nao\n");
        scanf("%d",&resp1);
    if(resp1==1){
        float Fp,fat,N,ue,uc;
        printf("\nDigite a Forca Paralela:");
        scanf("%f",&Fp);
        printf("\nDigite a Forca Normal:");
        scanf("%f",&N);
        printf("\nDigite o Coeficiente de Atrito Estatico:");
        scanf("%f",&ue);
        fat=ue*N;
        printf("\nDigite a Massa:");
        scanf("%f",&m);
        if(fat-Fp>=0){
            printf("\nA Forca Resultante e: 0 N");
            break;}
        else{
            printf("\nDigite o Coeficiente de Atrito Cinetico:");
            scanf("%f",&uc);
            fat=uc*N;
            Fr=(Fp-fat);
            printf("\nA Forca Resultante e: %g N",Fr);
            break;}
    }
    if(resp1==0){
        float sen,m;
        printf("\nDigite a SEN do angulo:");
        scanf("%f",&sen);
        printf("\nDigite a Massa:");
        scanf("%f",&m);
        Fr=m*10*sen;
        printf("\nA Forca Resultante e: %g N",Fr);
        break;
    }
    }
if(resp1==2){
    int;
    float Fap,m1,m2,cos,N,ue,uc,Fat1,Fat2;
    printf("\nExiste atrito:\n1-Sim\n0-Nao\n");
        scanf("%d",&resp1);
    if(resp1==1){
        printf("\nDigite a Forca Aplicada:");
        scanf("%f",&Fap);
        printf("\nDigite a Massa 1:");
        scanf("%f",&m1);
        printf("\nDigite a Massa 2:");
        scanf("%f",&m2);
        printf("\nDigite o COS:");
        scanf("%f",&cos);
        printf("\nDigite o coeficiente de atrito estatico:");
        scanf("%f",&ue);
        N=m1*10*cos;
        Fat1=ue*N;
        N=m2*10*cos;
        Fat2=ue*N;
        if(Fap-Fat1-Fat2<=0){
            printf("\nA Forca Resultante e: 0 N");
            break;
        }
        else{
            printf("\nDigite o coeficiente de atrito cinetico:");
        scanf("%f",&uc);
        N=m1*10*cos;
        Fat1=uc*N;
        N=m2*10*cos;
        Fat2=uc*N;
        Fr=Fap-(Fat1+Fat2);
        printf("\nA Forca Resultante e: %g",Fr);
        break;
        }
    }

}
}



}
return 0;
}
