#include <iostream>

int main() {
    std::string name;
    std::string id;
    std::cout << "what is you name?" << std::endl;
    std::getline(std::cin >> std::ws, name);
    std::cout << "hello " << name << std::endl;
    std::cout << "what is you student ID?" << std::endl;
    std::cin >> id;
    std::cout << "your id is: " << id << std::endl;

    std::cout << "**********************part2**********************" << std::endl;

    int var1;
    int var2;
    int sum;
    int diff;
    int prod;
    std::cout << "enter value for var1: " << std::endl;
    std::cin >> var1;
    std::cout << "enter value for var2: " << std::endl;
    std::cin >> var2;
    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;

    std::cout << "var1 is : " << var1 << std::endl;
    std::cout << "var2 is : " << var2 << std::endl;
    std::cout << "sum of var1 and var2 is: " << sum << std::endl;
    std::cout << "difference of var1 and var2 is: " << diff << std::endl;
    std::cout << "product of var1 and var2 is: " << prod << std::endl;

    std::cout << "**********************part3**********************" << std::endl;

    std::string name1;
    float labGrade;
    float midtermGrade;
    float finalGrade;
    float lastScore;
    std::cout << "what is you name?" << std::endl;
    std::getline(std::cin >> std::ws, name1);
    std::cout << "what is your lab grade: " << std::endl;
    std::cin >> labGrade;
    std::cout << "what is your midterm grade: " << std::endl;
    std::cin >> midtermGrade;
    std::cout << "what is your final grade: " << std::endl;
    std::cin >> finalGrade;
    lastScore = (0.25 * labGrade) + (0.35 * midtermGrade) + (0.4 * finalGrade);
    std::cout << "Name: " << name1 << std::endl;
    std::cout << "Lab: " << labGrade << std::endl;
    std::cout << "Midterm: " << midtermGrade << std::endl;
    std::cout << "Final: " << finalGrade << std::endl;
    std::cout << "Last score: " << lastScore << std::endl;

    std::cout << "**********************part4**********************" << std::endl;
    printf("*\n**\n***\n**\n*");

}
