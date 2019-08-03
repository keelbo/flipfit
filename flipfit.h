#include <iostream>

#include <bits/stdc++.h>

using namespace std;

enum workoutType
{
    Weights,
    Cardio,
    Yoga,
    Swimming
};

enum slotNo
{
    SixMorning,
    SevenMorning,
    EightMorning,
    SixEvening,
    SevenEvening,
    EightEvening,
};

class User
{
private:
    string userID;
    // string email;

public:
    User(string);
    string getUserId();
    // ~User();
};

class UserList
{
private:
    unordered_map<string, User *> userList;

public:
    // ~UserList();
    User *registerUser();
    User *registerUser(User *);
};

class Workout
{
private:
    int capacity;
    vector<string> bookedUserList; // list of userId's

public:
    Workout(int);
    bool bookWorkout(string);
};

class Slot
{
private:
    int id;
    // workoutType, workout
    unordered_map<string, Workout *> workoutList;

public:
    Slot(int);
    Workout *getWorkout(string);
    vector<Workout *> getAvailableWorkouts();
};

class WorkStation
{
private:
    string place;
    // Address address;
    // day , month, slotNo, slot
    unordered_map<int, unordered_map<int, unordered_map<int, Slot >>> slotList;

public:
    WorkStation();
    void init(string);
    void printAvailableSlots();
    // day, month
    void printAvailableSlots(int, int);
    void bookSlot(User *);
    // day, month, slotNo, workoutType, user
    void bookSlot(int, int, int, string, User *);
};

class WorkStationList
{
private:
    unordered_map<string, WorkStation *> workStationList;

public:
    void addWorkStation(string, WorkStation *);
};
