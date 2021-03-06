//
// Created by pedro on 01/12/21.
//

#include "Service.h"

Time CLEANING_DURATION = Time(1,0);
Time MAINTENANCE_DURATION = Time(24,0);

Service::Service(Type type,const Schedule & schedule,const string&name_of_employee){
    this->type_service=type;
    if(type==maintenance)
        this->duration = MAINTENANCE_DURATION;
    else
        this->duration = CLEANING_DURATION;
    this->schedule = schedule;
    this->name_of_employee = name_of_employee;
}
Type Service::get_type() const{
    return type_service;
}
Time Service::get_duration() const{
    return duration;
}
Schedule Service::get_schedule() const{
    return schedule;
}
string Service::get_name() const{
    return name_of_employee;
}
