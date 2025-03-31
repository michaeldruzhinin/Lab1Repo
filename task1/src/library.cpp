#include "library.hpp"
#include <iostream>

namespace template_library {

  
    void EventScheduler::add_event(int time, const std::string& event) {
        events[time] = event; 
        time_queue.push(time); 
    }

    std::string EventScheduler::process_next() {
        if (time_queue.empty()) {
            return "Нет событий"; 
        }

        int next_time = time_queue.top();  
        time_queue.pop();                  

        std::string event = events[next_time];
        events.erase(next_time);               

        return event; 
    }

}
