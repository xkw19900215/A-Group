#include <stdio.h>
#include <stdlib.h>

int main(void){
	int current_q_pos;
	int ans;

	current_q_pos = 0;


	printf("\n");
	printf("**********************************************************\n");
	printf("*�@�@�@�@�@ --- �v���O���~���O���ꑊ���f�f ---�@�@�@�@�@ *\n");
	printf("*�@�@�@���Ȃ��Ƒ����̂����v���O���~���O���ꂳ��́H�@�@�@*\n");
	printf("**********************************************************\n");
	printf("\n\n");

	while(1){
		switch(current_q_pos){
			case 0:
				printf("�d���͂P�l�ł�������吨�ł�������y�����B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 1;
				} else if(ans == 0){
					current_q_pos = 5;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 1:
				printf("�Г��C�x���g�ɂ͂ǂ��炩�ƌ����ΎQ���������B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 2;
				} else if(ans == 0){
					current_q_pos = 5;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 2:
				printf("���s�͍D���ł���B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 3;
				} else if(ans == 0){
					current_q_pos = 7;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 3:
				printf("���s�ƌ����ΊC�O���B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 8;
				} else if(ans == 0){
					current_q_pos = 4;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 4:
				printf("������f�������Ƃ��������Ă��܂��B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 9;
				} else if(ans == 0){
					current_q_pos = 8;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 5:
				printf("�Еt���͓��ӂȕ����B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 6;
				} else if(ans == 0){
					current_q_pos = 10;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 6:
				printf("����̊����������󂯂Ă���ɂȂ�Ȃ��B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 11;
				} else if(ans == 0){
					current_q_pos = 12;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 7:
				printf("�y�V�I�ł���B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 8;
				} else if(ans == 0){
					current_q_pos = 12;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 8:
				printf("���肽���X�ɂ͒����s�񂪂ł��Ă��Ă�����łł�����B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 13;
				} else if(ans == 0){
					current_q_pos = 12;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 9:
				printf("���̉��̗͎����̂悤�ȑ��݂���؂ȑ��݂��B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 14;
				} else if(ans == 0){
					current_q_pos = 8;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 10:
				printf("�����ɂ͗��R���K�����݂���B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 15;
				} else if(ans == 0){
					current_q_pos = 6;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 11:
				printf("���[�h���[�J�[���Ǝv���B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 16;
				} else if(ans == 0){
					current_q_pos = 12;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 12:
				printf("�ƌv���t���Ă���B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 17;
				} else if(ans == 0){
					current_q_pos = 16;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 13:
				printf("��̂��Ƃ��������悯��΂���ł悢�B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 18;
				} else if(ans == 0){
					current_q_pos = 12;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 14:
				printf("�l�Ƙb������̂͊y�����B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 19;
				} else if(ans == 0){
					current_q_pos = 8;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 15:
				printf("�ς�������̂ɋ���������B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 20;
				} else if(ans == 0){
					current_q_pos = 11;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 16:
				printf("���܂����Ă�����������ɋ����Ă��܂��B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 21;
				} else if(ans == 0){
					current_q_pos = 17;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 17:
				printf("�����ł��������Ƃ����v������s������B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 22;
				} else if(ans == 0){
					current_q_pos = 18;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 18:
				printf("�V�������D���ł���B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 23;
				} else if(ans == 0){
					current_q_pos = 24;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 19:
				printf("�F�B�ƃp�[�e�B�[�ɎQ������̂͊y�����B\n");
				printf("(Yes : 1, No : 0)\n");
				printf(": ");
				scanf("%d", &ans);

				if(ans == 1){
					current_q_pos = 24;
				} else if(ans == 0){
					current_q_pos = 8;
				} else {
					printf("���̓G���[�I\n");
					printf("1��0�œ��͂��Ă��������I\n\n");
				}

				break;

			case 20:
				printf("\n���Ȃ��Ƒ����������̂� -------> �w�A�Z���u���x����\n\n");
				printf("�ς�������D���Ń}�j�A�b�N�Ȃ��Ȃ���\n");
				printf("�Ȃ̑����w�A�Z���u���x������g�����Ȃ��邱�Ƃł��傤�B\n");

				current_q_pos = -1;

				break;

			case 21:
				printf("\n���Ȃ��Ƒ����������̂� -------> �w�b�x����\n\n");
				printf("���l�ɗD�����S�̍L�����Ȃ���\n");
				printf("�Ȃ��Ȃ������Ă���Ȃ��w�b�x������g�����Ȃ��邱�Ƃł��傤�B\n");

				current_q_pos = -1;

				break;

			case 22:
				printf("\n���Ȃ��Ƒ����������̂� -------> �w�i�������x����\n\n");
				printf("�����Ő����D���̂��Ȃ���\n");
				printf("�����Ɓw�i�������x����̐������w��ł������Ƃł��傤�B\n");

				current_q_pos = -1;

				break;

			case 23:
				printf("\n���Ȃ��Ƒ����������̂� -------> �w�o�����������x����\n\n");
				printf("�V�������D���Ńg���W���[�n���^�[�̂悤�Ȃ��Ȃ���\n");
				printf("�ŐV�s�́w�o�����������x������g�����Ȃ��邱�Ƃł��傤�B\n");

				current_q_pos = -1;

				break;

			case 24:
				printf("\n���Ȃ��Ƒ����������̂� -------> �w�o�g�o�x����\n\n");
				printf("�Ќ�I�ŗF�B�̑������Ȃ���\n");
				printf("�s���Ȃ��b��Łw�o�g�o�x����ƌp���I�Ȋ֌W��z�����Ƃ��ł���ł��傤�B\n");

				current_q_pos = -1;

				break;

			default:
				current_q_pos = -2;

				break;
		}

		if(current_q_pos == -1){
			printf("\n�I������ɂ�\"Enter\"�L�[�������Ă��������B");
			while(getchar() != '\n')break;
			fflush(stdin);
			while(getchar() != '\n')break;
			fflush(stdin);
			break;
		} else if(current_q_pos == -2){
			printf("\n�G���[�I\n");
			printf("�s���ȏ����ɂ��I�����܂��B\n");
			printf("���s�ւ����|�����܂��B\n");
			return EXIT_FAILURE;
		}

	}

return EXIT_SUCCESS;
}

