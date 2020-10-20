#include "create_new_agents.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
	if (!name)
		return NULL;
	t_agent *agent = malloc(16);
	agent->name = mx_strdup(name);
	agent->power = power;
	agent->strength = strength;
	return agent;
}
