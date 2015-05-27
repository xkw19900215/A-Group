#include <stdio.h>
#include <stdlib.h>

int main(void){
	int current_q_pos;
	int ans;

	current_q_pos = 0;


	printf("\n");
	printf("**********************************************************\n");
	printf("*　　　　　 --- プログラミング言語相性診断 ---　　　　　 *\n");
	printf("*　　　あなたと相性のいいプログラミング言語さんは？　　　*\n");
	printf("**********************************************************\n");
	printf("\n\n");

	while(1){
		switch(current_q_pos){
			case 0:
				printf("仕事は１人でするよりも大勢でする方が楽しい。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 1;
				} else if(ans == 0){
					current_q_pos = 5;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 1:
				printf("社内イベントにはどちらかと言えば参加したい。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 2;
				} else if(ans == 0){
					current_q_pos = 5;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 2:
				printf("旅行は好きである。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 3;
				} else if(ans == 0){
					current_q_pos = 7;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 3:
				printf("旅行と言えば海外だ。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 8;
				} else if(ans == 0){
					current_q_pos = 4;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 4:
				printf("泣ける映画を見るとついつい泣いてしまう。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 9;
				} else if(ans == 0){
					current_q_pos = 8;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 5:
				printf("片付けは得意な方だ。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 6;
				} else if(ans == 0){
					current_q_pos = 10;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 6:
				printf("宴会の幹事を引き受けても苦にならない。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 11;
				} else if(ans == 0){
					current_q_pos = 12;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 7:
				printf("楽天的である。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 8;
				} else if(ans == 0){
					current_q_pos = 12;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 8:
				printf("入りたい店には長い行列ができていても並んででも入る。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 13;
				} else if(ans == 0){
					current_q_pos = 12;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 9:
				printf("縁の下の力持ちのような存在も大切な存在だ。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 14;
				} else if(ans == 0){
					current_q_pos = 8;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 10:
				printf("物事には理由が必ず存在する。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 15;
				} else if(ans == 0){
					current_q_pos = 6;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 11:
				printf("ムードメーカーだと思う。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 16;
				} else if(ans == 0){
					current_q_pos = 12;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 12:
				printf("家計簿を付けている。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 17;
				} else if(ans == 0){
					current_q_pos = 16;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 13:
				printf("先のことよりも今がよければそれでよい。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 18;
				} else if(ans == 0){
					current_q_pos = 12;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 14:
				printf("人と話をするのは楽しい。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 19;
				} else if(ans == 0){
					current_q_pos = 8;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 15:
				printf("変わったものに興味がある。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 20;
				} else if(ans == 0){
					current_q_pos = 11;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 16:
				printf("喧嘩をしても相手をすぐに許してしまう。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 21;
				} else if(ans == 0){
					current_q_pos = 17;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 17:
				printf("何事でもきちっとした計画を作り行動する。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 22;
				} else if(ans == 0){
					current_q_pos = 18;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 18:
				printf("新しい物好きである。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 23;
				} else if(ans == 0){
					current_q_pos = 24;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 19:
				printf("友達とパーティーに参加するのは楽しい。\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 24;
				} else if(ans == 0){
					current_q_pos = 8;
				} else {
					printf("入力エラー！\n");
					printf("1か0で入力してください！\n\n");
				}

				break;

			case 20:
				printf("\nあなたと相性がいいのは -------> 『アセンブラ』さん\n\n");
				printf("変わった物好きでマニアックなあなたは\n");
				printf("癖の多い『アセンブラ』さんも使いこなせることでしょう。\n");

				current_q_pos = -1;

				break;

			case 21:
				printf("\nあなたと相性がいいのは -------> 『Ｃ』さん\n\n");
				printf("他人に優しく心の広いあなたは\n");
				printf("なかなか動いてくれない『Ｃ』さんも使いこなせることでしょう。\n");

				current_q_pos = -1;

				break;

			case 22:
				printf("\nあなたと相性がいいのは -------> 『Ｊａｖａ』さん\n\n");
				printf("堅実で整理好きのあなたは\n");
				printf("こつこつと『Ｊａｖａ』さんの性質を学んでいくことでしょう。\n");

				current_q_pos = -1;

				break;

			case 23:
				printf("\nあなたと相性がいいのは -------> 『Ｐｙｔｈｏｎ』さん\n\n");
				printf("新しい物好きでトレジャーハンターのようなあなたは\n");
				printf("最新鋭の『Ｐｙｔｈｏｎ』さんも使いこなせることでしょう。\n");

				current_q_pos = -1;

				break;

			case 24:
				printf("\nあなたと相性がいいのは -------> 『ＰＨＰ』さん\n\n");
				printf("社交的で友達の多いあなたは\n");
				printf("尽きない話題で『ＰＨＰ』さんと継続的な関係を築くことができるでしょう。\n");

				current_q_pos = -1;

				break;

			default:
				current_q_pos = -2;

				break;
		}

		if(current_q_pos == -1){
			printf("\n終了するには\"Enter\"キーを押してください。");
			while(getchar() != '\n')break;
			fflush(stdin);
			while(getchar() != '\n')break;
			fflush(stdin);
			break;
		} else if(current_q_pos == -2){
			printf("\nエラー！\n");
			printf("不正な処理により終了します。\n");
			printf("ご不便をお掛けします。\n");
			return EXIT_FAILURE;
		}

	}

return EXIT_SUCCESS;
}

