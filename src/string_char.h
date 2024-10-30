#include <Arduino.h>

void task1_string() {
    Serial.println("Task 1 string");
    int val1 = 1234;
    int val2 = 5678;
    
    String str;
    str = str + "http://website.ru/request?param1=" + val1 + "&param2=" + val2;
    Serial.println(str);
}

void task1_char() {
    Serial.println("Task 1 char");
    int val1 = 1234;
    int val2 = 5678;

    char cstr[60] = "";
    strcat(cstr, "http://website.ru/request?param1=");

    char cint[10];
    itoa(val1, cint, DEC);//преобразовывает val1
    strcat(cstr, cint);//вставляет val1

    strcat(cstr, "&param2=");

    itoa(val2, cstr + strlen(cstr), DEC);//преобразовывает и вставляет val2
    Serial.println(cstr);
}

void task2() {
    Serial.println("Task 2");

    String str = "12345";
    int val1 = str.toInt();

    char cstr[] = "12345";
    int val2 = atoi(cstr);

    Serial.println(val1);
    Serial.println(val2);
}

void tast3_string() {
    Serial.println("Task 3 string");
    String str = "param,12345";
    int comma = str.indexOf(',');
    String name = str.substring(0, comma);
    Serial.println(name);
    int value = str.substring(comma + 1).toInt();
    Serial.println(value);
}

void task3_char() {
    Serial.println("Task 3 char");
    char cstr[] = "param,12345";
    char* comma = strchr(cstr, ',');
    char name[10];
    strncpy(name, cstr, comma - cstr);
    name[comma - cstr] = 0;
    Serial.println(name);
    int value = atoi(comma + 1);
    Serial.println(value);
}

void string_char_tasks() {
    Serial.println("string_char_tasks");
    task1_string();
    task1_char();
    task2();
    tast3_string();
    task3_char();
}