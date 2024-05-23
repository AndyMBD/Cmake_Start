#include "Employee.h"

struct Manager
{
    struct Employee Employee;
    int level;
};

extern const struct ManagerClass
{
    struct Manager (*new)(const char *first_name,
                          const char *family_name, int level);
} Manager;