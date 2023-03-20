#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define struct dog new type
 *
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dot_t - typedef for struct dog.
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* end ifndef DOG_H */
