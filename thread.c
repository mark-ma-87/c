/* gcc thread.c -lpthread -o thread  */
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *mythread1(void)
{
	int i;
	for (i = 0; i < 100; i++)
	{
		printf("This is the 1st thread\n");
		sleep(1);
	}
}

void *mythread2(void)
{
	int i;
	for (i = 0; i < 100; i++)
	{
		printf("this is the 2nd thread\n");
		sleep(1);
	}
}

int main()
{
	int ret = 0;
	pthread_t id1, id2;
	ret = pthread_create(&id1, NULL, (void*)mythread1, NULL);
	if (ret)
	{
		printf("create thread1 error!\n");
		return -1;
	}
	ret = pthread_create(&id2, NULL, (void*)mythread2, NULL);
	if (ret)
	{
		printf("create thread2 error!\n");
		return -1;
	}

	pthread_join(id1, NULL);
	pthread_join(id2, NULL);

	return 0;
}
