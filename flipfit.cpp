#include "flipfit.h";

// User::User(string _userId) : userID(_userId) {}

string User::getUserId()
{
    return userID;
}

User *UserList::registerUser()
{
    cout << "enter userID" << endl;
    string userId;
    cin >> userId;
    User *user = new User(userId);
    return registerUser(user);
}

User *UserList::registerUser(User *user)
{
    //TODO: Check if user already registered
    userList[user->getUserId()] = user;
    return user;
}

Workout::Workout(int _capacity) : capacity(_capacity) {}

bool Workout::bookWorkout(User *user)
{
    if (bookedUserList.size() < capacity)
    {
        bookedUserList.push_back(user);
        return true;
    }
    return false;
}

Slot::Slot(int _id) : id(_id) {}

Workout *Slot::getWorkout(string workoutType)
{
    if (workoutList.find(workoutType) != workoutList.end())
    {
        return workoutList[workoutType];
    }
    return nullptr;
}

vector<Workout *> Slot::getAvailableWorkouts()
{
}

// WorkStation::WorkStation() {}

void WorkStation::init()
{
}

void WorkStation::printAvailableSlots()
{
    // Showcase available slots based on different filters
    // case 1 (day, month):
    int day, month;
    cout << "Enter day" << endl;
    cin >> day;
    cout << "Enter Month" << endl;
    cin >> month;
    printAvailableSlots(day, month);
}

void WorkStation::printAvailableSlots(int day, int month)
{
    vector<int> slotNos{1, 2, 3, 4, 5, 6};
    for (int i = 0; i < slotNos.size(); i++)
    {
        vector<int, int> temp{day, month};
        map<vector<int, int>, int> mp;
        mp[temp] = slotNos[i];
        unordered_map<string, Workout *>::iterator itr;
        // itr = slotList[mp].begin();
        // while (itr != slotList[mp].end())
        // {

        //     itr++;
        // }
    }
}

void WorkStation::bookSlot(User *loggedUser)
{
    // Showcase available slots based on different filters
    // case 1 (day, month):
    int day, month, slotNo;
    string workoutType;
    cout << "Enter day" << endl;
    cin >> day;
    cout << "Enter Month" << endl;
    cin >> month;

    cout << "Enter slotNo" << endl;
    cin >> slotNo;

    cout << "Enter workoutType(Weights, Cardio, Yoga, Swimming)" << endl;
    cin >> workoutType;

    bookSlot(day, month, slotNo, workoutType, loggedUser);
}

void WorkStation::bookSlot(int day, int month, int slotNo, string workoutType, User *user)
{
    //TODO: implement bookSlot
}

void WorkStationList::addWorkStation(string place, WorkStation *workStation)
{
    // Aler if overiding the already existing workstation.
    workStationList[place] = workStation;
}
