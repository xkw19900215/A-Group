#include<stdio.h>
int main(void){
	int	i;
	double	a,b,ans;
	char	c;

	i=1;
	while(i==1){										//iが１なら計算を続ける

		printf("式を入力 *数値や記号の間には半角スペースを入力(例、1 + 1)\n");
		if(scanf("%lf %c %lf",&a,&c,&b)!=3){printf("入力エラー\nもう一度やり直してください\n");continue;}
		//数値を入力　３つ以上読み込んだら再入力のつもり

		if(c=='+'){ans=a+b;}								//計算↓
		else if(c=='-'){ans=a-b;}							//
		else if(c=='*'){ans=a*b;}							//
		else if(c=='/'){								//
			if(b==0){printf("入力エラー\nもう一度やり直してください\n");continue;}	//ここまで
			else{ans=a/b;}
		}
		else{printf("入力エラー\nもう一度やり直してください\n");continue;}		//エラーやり直し

		printf("%g %c %g = %g\n",a,c,b,ans);						//出力
		printf("終了なら:0 電卓を続けるなら:1\n");scanf("%d",&i);			//もう一度やるかやらないか
	}うう

	return 0;
}
