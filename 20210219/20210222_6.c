/*Опишете времето в структура: часове:минути:секунди като структура tagTMyTime.
Използвайки тази структура, дефинирайте следните функции: добавяне на секунди,
добавяне на минути. Добавяне на часове към дадена променлива от тип struct
tagTMyTime. Напишете следните функции: връщане на броя секунди за дадена
променлива от въведения тип и обратна функция от секундите да се генерира
променлива tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.*/
#include <stdio.h>
#include <stdlib.h>

struct tagTMyTime{
    int hours;
    int minutes;
    int seconds;


};
void checkTime(struct tagTMyTime *time){
    if(time->seconds>59){
        time->minutes=time->seconds/60+time->minutes;
        time->seconds=time->seconds%60;
        }
    if(time->minutes>59){
            time->hours=time->minutes/60+time->hours;
            time->minutes=time->minutes%60;
        }
    if (time->hours >23)
    {   if(time->hours==24){
        time->hours=0;
    }else{
        
        time->hours = abs(time->hours-24);
    }
    }
    
};
void addSeconds(struct tagTMyTime* time,int seconds){
    time->seconds+=seconds;
    checkTime(time);
};
void addMinutes(struct tagTMyTime *time,int minutes){
    time->minutes+=minutes;
    checkTime(time);
};

void addHours(struct tagTMyTime *time,int hours){
    time->hours+=hours;
    checkTime(time);

};
void printTime(struct tagTMyTime time){
    printf("%02d:%02d:%02d\n", time.hours, time.minutes, time.seconds);
}

struct tagTMyTime add(struct tagTMyTime *time,struct tagTMyTime *time1){
    struct tagTMyTime new;
    new.seconds=time->seconds+time1->seconds;
    new.minutes=time->minutes+time1->minutes;
    new.hours=time->hours+time1->hours;
    checkTime(&new);

    return new;
}

int main(){

    struct tagTMyTime clock = {22, 59, 38};
    struct tagTMyTime clock1={20,10,12};
    struct tagTMyTime *ptr=&clock;
    struct tagTMyTime *ptr1=&clock1;
    addSeconds(ptr,42);
    printTime(clock);
    addMinutes(ptr,62);
    printTime(clock);
    addHours(ptr,2);
    printTime(clock);

    struct tagTMyTime clock2;
    clock2 = add(ptr, ptr1);
    printTime(clock2);
}