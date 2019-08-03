#include "flipfit.h"

User::User(string _userId) : userID(_userId) {}

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

bool Workout::bookWorkout(string userId)
{
    if (bookedUserList.size() < capacity)
    {
        bookedUserList.push_back(userId);
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

WorkStation::WorkStation() {}

void WorkStation::init(string place)
{
    this->place = place;
    Slot *temp;

    // unordered_map<int, unordered_map<int, unordered_map<int, Slot >>>
    // unordered_map<int, unordered_map<int, Slot>> iisTemp;
    // unordered_map<int, Slot> isTemp;
    // slotList[1] =
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
