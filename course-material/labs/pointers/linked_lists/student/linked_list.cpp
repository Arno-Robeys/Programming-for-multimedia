#include "linked_list.h"


/*
  Counts the number of elements in the list.

  The null pointer is written nullptr in C++.
*/
unsigned length(linked_list* lst)
{
    unsigned count = 0;
    while (lst != nullptr)
    {
		count++;
		lst = lst->next;
	}
	return count;
}

/*
  Finds the penultimate node in the list.
  The penultimate node is the node just before the last one.
  If there is no penultimate node (because the list is too short),
  return nullptr.
*/
linked_list* penultimate(linked_list* lst)
{
    if (lst == nullptr)
		return nullptr;
	if (lst->next == nullptr)
		return nullptr;
	if (lst->next->next == nullptr)
		return lst;
	return penultimate(lst->next);
    
}

/*
  Returns a pointer to the longest list.
  Keep it as efficient as possible: if you
  get a list of 1 long and one of 1 billion long,
  you do not want to spend time counting a billion elements.

  If both lists have equal length, return nullptr.
*/
linked_list* longest(linked_list* xs, linked_list* ys)
{
	if (length(xs) > length(ys))
		return xs;
	if (length(xs) < length(ys))
		return ys;
	return nullptr;
    
}

/*
  Given a non-cyclic linked list, modifies
  it so as to make it cyclic by having
  the last node point to the first.
*/
void make_cyclic(linked_list* lst)
{
	if (lst == nullptr)
		return;
	if (lst->next == nullptr)
		return;
	if (lst->next->next == nullptr)
	{
		lst->next->next = lst;
		return;
	}
	make_cyclic(lst->next);
    
}

/*
  Checks whether the linked list contains
  a cycle. You will not need a special
  data structure for this (i.e. no arrays,
  lists, sets, ... are necessary).
  If you need inspiration for how to do this,
  look up hares and tortoises.
*/
bool has_cycle(linked_list* lst)
{

}
