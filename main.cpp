#include "flipfit.h";

int main(int argc, char const *argv[])
{

    // We can support WorkstationList
    string BELLANDUR = "bellandur";
    WorkStation *bellandur = new WorkStation();
    bellandur->init();

    User *loggedUser = nullptr;
    UserList *userList = new UserList();

    while (true)
    {
        cout << "registUser(r), view(v), exit(q)" << endl;
        char inputType;
        cin >> inputType;
        switch (inputType)
        {
        case 'r':
            loggedUser = userList->registerUser();
            break;
        case 'v':
            char vInputType;
            cout << "printAvailableSlots(p), bookslots(b), skip(s)" << endl;
            cin >> vInputType;
            if (vInputType == 'p')
            {
                bellandur->printAvailableSlots();
            }
            else if (vInputType == 'b')
            {
                if (loggedUser)
                {
                    bellandur->bookSlot(loggedUser);
                }
                else
                {
                    cout << "Please register" << endl;
                }
            }

        default:
            break;
        }
    }

    return 0;
}
