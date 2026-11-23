#include <stdio.h>

int main(){

    struct Students{
        char name[50];
        int score;
    }
    //학생 구조체 변수 선언
    struct Students 3;
    //파일 포인터 3개 선언
    FILE*fp;
    FILE*pass;
    FILE*fail;
    //학생 수를 저장할 변수 선언
    int count;
    fp=fopen("students.txt","w");
    //만약 파일 열기에 실패했다면
    if(fp==NULL){
        //오류 메시지를 출력한다
        printf("파일 열기 실패");
        //프로그램을 종료한다
        return 1;
        
    }
    //학생 수를 입력받는다.
    //ex) 학생 수 입력
    printf("학생 수 입력");
    scanf("%d",&count);
    //학생 수만큼 반복한다
    for(int i=0; i<count; i++)
    {
        //학생 이름을 입력받는다
        printf("\n%d번째 학생 이름", i+1);
        scanf("%49s",s.name);
        //학생 점수를 입력받는다
        printf("점수 : ");
        scanf("%d",&s.score);

        //이름과 정수를 students.txt에 저장한다
        fprint(fp,"%s %d\n",s.name.s.score);
    }//반복문 끝
    //students.txt 파일을 닫는다
    fclose(fp);

    //students.txt 파일을 일기 모드로 연다
    fp=fopen("students.txt","r");
    //pass.txt 파일을 쓰기 모드로 연다
    pass=fopen("pass.txt","w")
    //fail.txt 파일을 쓰기 모드로 연다
    fail=open("fail.txt","w")
     //만약 세 파일 중 하나라도 열기에 실패했다면
    if(fp==NULL || pass==NULL || fail ==NULL)
    {
        //오류 메시지를 출력한다
        printf("파일 열기 실패\n");
        //성공적으로 열린 파일은 닫는다
        if(fp != NULL) fclose(fp);
        if(pass != NULL) fclose(pass);
        if(fail != NULL) fclose(fail);

        //파일에서 이름과 점수를 모두 읽을 수 있는 동안 반복한다
        //읽은 데이터를 학생 구조체에 저장한다
        while(fscanf(fp,"%49s %d",s.name, &s.score)){
            //만약 학생 점수가 80점 이상이라면
            if(s.score>=80){
                //pass.txt에 이름과 점수를 저장한다
                fprint(pass,"%s %d\n",s.name,s.score);
            }
            else{
                //fail.txt에 이름과 점수를 저장한다
                fprintf(fail,"%s %d\n",s.name,s.score);
            }
        }
        fclose(fp);
        fclose(pass);
        fclose(fail);

        printf("파일 저장 및 분류 완료!");
        

    }

}