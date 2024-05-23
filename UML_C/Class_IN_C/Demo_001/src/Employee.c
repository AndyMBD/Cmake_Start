#include "Employee.h"

static const char *print(struct Employee *this,
                         size_t bufsize, char buf[bufsize])
{
    snprintf(buf, bufsize, "Name: %s %s",
             this->first_name, this->family_name);
    return buf;
}

static struct Employee new(const char *first_name,
                           const char *family_name)
{
    return (struct Employee){
        .first_name = strdup(first_name),
        .family_name = strdup(family_name),
        .print = &print};
}

const struct EmployeeClass Employee = {.new = &new};