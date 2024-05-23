struct Employee
{
    const char *first_name;
    const char *family_name;
    const char *(*print)(struct Employee *this,
                         size_t bufsize, char buf[bufsize]);
};

extern const struct EmployeeClass
{
    struct Employee (*new)(const char *first_name,
                           const char *family_name);
} Employee;