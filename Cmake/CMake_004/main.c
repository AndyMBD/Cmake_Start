#include "iostream.h"
#include "windows.h" 
#include "stdio.h"


static  int COUNT = 0;

VOID CALLBACK TimerRoutine(PVOID lpParameter, BOOLEAN TimerOrWaitFired)
{
    if (NULL == lpParameter)
    {
        printf("TimerRoutine parameter is NULL!\n" ) ;
        return;
    }

    printf("the values of param is :%d\n", *(int*)lpParameter);
}

int main(int argc, TCHAR *argv[])
{
    HANDLE m_hTimerQueueTimer = NULL;
    HANDLE m_hTimerQueue = NULL;

    while (NULL == (m_hTimerQueue = CreateTimerQueue())) {
        cout << "Create timer queue failed!" << endl;
        Sleep(10);
    }

    while (!CreateTimerQueueTimer(&m_hTimerQueueTimer, m_hTimerQueue, WAITORTIMERCALLBACK(TimerRoutine), &COUNT, 1000, 1000, NULL))
    {
        cout << "Create timer failed!" << endl;
        Sleep(10);
    }

    while (1) {
        Sleep(1000);
        COUNT++;
    }

    if (m_hTimerQueueTimer != NULL)
        DeleteTimerQueueTimer(m_hTimerQueue, m_hTimerQueueTimer, INVALID_HANDLE_VALUE);
    if (m_hTimerQueue != NULL)
        DeleteTimerQueueEx(m_hTimerQueue, INVALID_HANDLE_VALUE);

    m_hTimerQueueTimer = NULL;
    m_hTimerQueue = NULL;


    return 0;
}