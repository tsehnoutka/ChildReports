/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "event.h"


int RoleConfiguration(EventInfo *pEvent)
{
	printf("Process Report Role Configuration %s\n",pEvent->data);
}