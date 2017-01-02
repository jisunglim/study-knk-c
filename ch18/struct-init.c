#include <stdio.h>
#include <string.h>

struct id_card {
  char name[20];
  int age;
  char id[16];
};

struct id_card init(struct id_card id_card1);
struct id_card build(const char *name,int age, const char *id);
void copy(struct id_card *copy, const struct id_card original);

int main(void)
{
  struct id_card id0 = {"Jisung", 24, "Jay J"};
  struct id_card id1 = build(id0.name, id0.age, id0.id);
  struct id_card id2 = init(id1);
  struct id_card *p = &id2;
  struct id_card id3 = *p;
  struct id_card id4;
  copy(&id4, id3);

  printf("%22s, %4d, %18s\n", id0.name, id0.age, id0.id);
  printf("%22s, %4d, %18s\n", id1.name, id1.age, id1.id);
  printf("%22s, %4d, %18s\n", id2.name, id2.age, id2.id);
  printf("%22s, %4d, %18s\n", id3.name, id3.age, id3.id);
  printf("%22s, %4d, %18s\n", id4.name, id4.age, id4.id);
}

struct id_card init(struct id_card id_card1)
{
  struct id_card new = id_card1;

  return new;
}

struct id_card build(const char *name, int age, const char *id)
{
  struct id_card new;

  strcpy(new.name, name);
  new.age = age;
  strcpy(new.id, id);
  return new;
}

void copy(struct id_card *copy, const struct id_card original)
{
  strcpy(copy->name, original.name);
  copy->age = original.age;
  strcpy(copy->id, original.id);
}
