#include <stdio.h>
#include <string.h>
/*
Объявить тип-структуру humen, включающую имя человека, фамилию и год рождения.
Объявить два массива из четырёх элементов типа humen. Ввести с консоли или из
файла элементы одного массива и построить на их основе другой, упорядочив
элементы по годам рождения. Вывести результат.
  */
struct humen {
  char name[20];
  char surname[20];
  int year;
};
int main(void) {
  int n;
  printf("Введите кл-во человек");
  scanf("%d", &n);
  struct humen m1[4], m2[4], m3[4];
  int i, j;
  for (i = 0; i < n; i++) {
    printf("введите данные о человеке\n");
    scanf("%s %s %d", m1[i].name, m1[i].surname, &m1[i].year);
    m2[i] = m1[i];
  }
  printf("\n");
  for (i = 0; i < n; i++) {
    printf("%s %s %d\n", m1[i].name, m1[i].surname, m1[i].year);
  }
  printf("\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n - 1; j++) {
      if (m2[j].year > m2[j + 1].year) {
        m3[j] = m2[j];
        m2[j] = m2[j + 1];
        m2[j + 1] = m3[j];
      }
    }
  }
  for (i = 0; i < n; i++) {
    printf("%s %s %d\n", m2[i].name, m2[i].surname, m2[i].year);
  }

  return 0;
}
