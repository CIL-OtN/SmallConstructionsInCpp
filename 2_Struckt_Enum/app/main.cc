#include "my_lib.h"
#include <iostream>

using namespace std;

enum PermissionLevel
{
    STUDENT = 1,
    TUTOR   = 2,
    DOZENT  = 3,
    ADMIN   = 4
};

enum Lanes {
    RIGHT_LANE = 1,
    CENTER_LANE = 0,
    LEFT_LANE = -1,
};

struct User
{
    int id;
    const char *name;
    PermissionLevel permission;
};

typedef struct Vehicle
{
    int id;
    Lanes lane;
    float velocity;
} TS_Vehicle;

void print_permissionlevel(User *&perm_fu)
{
    cout << "Heap function addr : " << &perm_fu << endl;

    switch (perm_fu->permission)
    {
    case PermissionLevel::STUDENT:
        cout << "ID: " << perm_fu->id << " -> " << perm_fu->name << " -> PermLevel: Student" << endl;
        break;
    case PermissionLevel::TUTOR:
        cout << "ID: " << perm_fu->id << " -> " << perm_fu->name << " -> PermLevel: Tutor" << endl;
        break;

    case PermissionLevel::DOZENT:
        cout << "ID: " << perm_fu->id << " -> " << perm_fu->name << " -> PermLevel: Dozent" << endl;
        break;

    case PermissionLevel::ADMIN:
        cout << "ID: " << perm_fu->id << " -> " << perm_fu->name << " -> PermLevel: Admin" << endl;
        break;

    default:
        break;
    }
}

void print_vehicle(TS_Vehicle *&v)
{
    // Test heap address
    cout << "Heap function addr : " << &v << endl;
    cout << "ID                 : " << v->id << endl;
    cout << "Lane               : " << v->lane << endl;
    cout << "Velocity           : " << v->velocity << endl;
}

int main()
{
    int id;

    std::system("clear");

    cout << "Choose ID: ";

    cin >> id;

    TS_Vehicle *v1 = new TS_Vehicle { id, Lanes::LEFT_LANE, 102.0f };

    // Test same heap address
    cout << "Heap Main addr v1  : " << &v1 << endl;

    print_vehicle(v1);

    cout << endl;

    // A test with designated struct initializer
    User *Jou = new User { .id=314, .name="Jou", .permission=PermissionLevel::TUTOR };  // ??? why

    // Test same heap address
    cout << "Heap Main addr Jou : " << &Jou << endl;

    print_permissionlevel(Jou);

    return 0;
}
