#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <list>
using namespace std;

#include "Railways.h"
#include "Station.h"
//vector<Station> Railways::sStations;
map<const string, const Station*> Railways::sStations;

map<pair<const Station*, const Station*>, int> Railways::sDistStations;

//Constructot for Railways
//storing data of stations and distances using map and pair
Railways::Railways(){
    sStations["Mumbai"] = new Station("Station");
    sStations["Delhi"] = new Station("Delhi");
    sStations["Bangalore"] = new Station("Banglore");
    sStations["Kolkata"] = new Station("Kolkata");
    sStations["Chennai"] = new Station("Chennai");

    sDistStations[make_pair(sStations["Mumbai"], sStations["Delhi"])] = 1447;
    sDistStations[make_pair(sStations["Mumbai"], sStations["Bangalore"])] = 981;
    sDistStations[make_pair(sStations["Mumbai"], sStations["Kolkata"])] = 2014;
    sDistStations[make_pair(sStations["Mumbai"], sStations["Chennai"])] = 1338;
    sDistStations[make_pair(sStations["Delhi"], sStations["Bangalore"])] = 2150;
    sDistStations[make_pair(sStations["Delhi"], sStations["Kolkata"])] = 1472;
    sDistStations[make_pair(sStations["Delhi"], sStations["Chennai"])] = 2180;
    sDistStations[make_pair(sStations["Bangalore"], sStations["Kolkata"])] = 1871;
    sDistStations[make_pair(sStations["Bangalore"], sStations["Chennai"])] = 350;
    sDistStations[make_pair(sStations["Kolkata"], sStations["Chennai"])] = 1659;
}

//Destructor
Railways::~Railways(){
    map<const string, const Station *>::iterator it;
    for(it = sStations.begin(); it != sStations.end(); ++it){ 
        delete it->second;
    }
}

Railways::Railways(const Railways& other){
    //copy ctor
}


const Station* Railways::GetStation(const string &name) const{
    map<const string, const Station*>::iterator x;
    for( x = sStations.begin(); x!=sStations.end(); x++){
        if(x->first == name)
            return x->second;
    }
    return NULL;
}

int Railways::GetDistance (const Station &from,const Station &to) const{
    //string s1 = from.GetName();
    //string s2 = to.GetName();
    int distance = 0;
    map<pair<const Station*, const Station*>, int>::iterator distance_it;
    distance_it = sDistStations.find(make_pair(GetStation(from.GetName()), GetStation(to.GetName())));
    if (distance_it == sDistStations.end()){
        distance_it = sDistStations.find(make_pair(GetStation(to.GetName()), GetStation(from.GetName())));
        if (distance_it == sDistStations.end()){
            cout<<"No route found!!"<<endl;
        }
    }
    distance = distance_it->second;
    return distance;
}

//Testing Basic class Functionalities
void Railways::UnitTestRailways(){
    string name = (Railways::IndianRailways().GetStation("Mumbai"))->GetName();
    unsigned d1 = Railways::IndianRailways().GetDistance(Station("Mumbai"),Station("Banglore"));
    if(name != "Mumbai"){
        cout << "Railways Name Error" << endl;
    }
    if(d1 != 981){
        cout << "Railways Distance Error" << endl;
    }
}
