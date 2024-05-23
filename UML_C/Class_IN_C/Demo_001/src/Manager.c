#include "Manager.h"

static const char *print(struct Employee *base,
                         size_t bufsize, char buf[bufsize])
{
    struct Manager *this =
        (void *)base - offsetof(struct Manager, Employee);
    snprintf(buf, bufsize, "Name: %s %s, level %d",
             this->Employee.first_name,
             this->Employee.family_name,
             this->level);
    return buf;
}

static struct Manager new(const char *first_name,
                          const char *family_name, int level)
{
    struct Manager ret = {.level = level};
    ret.Employee = Employee.new(first_name, family_name);
    ret.Employee.print = &print;
    return ret;
}

extern const struct ManagerClass Manager = {.new = &new};