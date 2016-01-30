#ifndef EVENTQUEUE_HPP
#define EVENTQUEUE_HPP


#include <deque>


class EventQueue {
public:
    EventQueue(void);

    void unsubscribeEvents(GameObject* gameObject);

private:
    //std::deque<Event> event_;
};


#endif // EVENTQUEUE_HPP
