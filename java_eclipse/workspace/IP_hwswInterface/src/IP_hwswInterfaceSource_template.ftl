// this module is auto-generated using Java Freemarker tool

// this file provides API functionality to application developer to perform HA-aware ${ip_name} filtering on captured video

#include "${ip_name}_func.h"

// driver instances for ${ip_name}_HA
<#list 1..ip_NumGripRules as i>
${ip_name}_Rule${i}_DriverInstance ${ip_name}_Rule${i}_Driver[${ip_name?upper_case}_NUM_GRIPRULE${i}_INSTANCES];
</#list>

void ${ip_name}_func_init(${interruptcontroller} *InterruptController<#if ip_sw_param_types?size != 0>, <#if ip_sw_param_types?size &gt; 1><#list 0..ip_sw_param_types?size-2 as i>${ip_sw_param_types[i]} ${ip_sw_param_names[i]}, </#list></#if>${ip_sw_param_types[ip_sw_param_types?size-1]} ${ip_sw_param_names[ip_sw_param_names?size-1]}</#if>) {
    <#assign x = 0>    
    <#list 1..ip_NumGripRules as i>
        <#list 0..ip_GripRulesInstances[i-1]-1 as j>
            <#list ips_forRule[i-1] as k>
    ${ip_name}_Rule${i}_Driver[${j}]._${k}_DriverInstance.baseaddr = ${ip_name?upper_case}_${x}_${k?upper_case}_BASEADDR;
    ${ip_name}_Rule${i}_Driver[${j}]._${k}_DriverInstance.intr_id = ${ip_name?upper_case}_${x}_${k?upper_case}_INTRID;
    ${ip_name}_Rule${i}_Driver[${j}]._${k}_DriverInstance.busy = 0;
            </#list>            
            <#assign x++>
    ${ip_name}_Rule${i}Driver_initialize(&${ip_name}_Rule${i}_Driver[${j}], InterruptController<#if ip_sw_param_names?size != 0>, <#if ip_sw_param_names?size &gt; 1><#list 0..ip_sw_param_names?size-2 as i>${ip_sw_param_names[i]}, </#list></#if>${ip_sw_param_names[ip_sw_param_names?size-1]}</#if>);

        </#list>
    </#list>
}

void ${ip_sw_name}_func(<#if ip_sw_param_types?size != 0><#if ip_sw_param_types?size &gt; 1><#list 0..ip_sw_param_types?size-2 as i>${ip_sw_param_types[i]} ${ip_sw_param_names[i]}, </#list></#if>${ip_sw_param_types[ip_sw_param_types?size-1]} ${ip_sw_param_names[ip_sw_param_names?size-1]}</#if>) {
#if ${ip_name?upper_case}_NUM_INSTANCES == 0
    ${ip_sw_name}(<#if ip_sw_param_names?size != 0><#if ip_sw_param_names?size &gt; 1><#list 0..ip_sw_param_names?size-2 as i>${ip_sw_param_names[i]}, </#list></#if>${ip_sw_param_names[ip_sw_param_names?size-1]}</#if>);
#else
    int idx;    
    <#list 1..ip_NumGripRules as i>
    // seeing if ${ip_name} filtering for current captured frame can be done on any ${ip_name} rule${i} system    
    for (idx = 0; idx<${ip_name?upper_case}_NUM_GRIPRULE${i}_INSTANCES; idx++) {
        if (${ip_name}_Rule${i}Driver_isBusy(&${ip_name}_Rule${i}_Driver[idx]) == 0) {
            ${ip_name}_Rule${i}Driver_start(&${ip_name}_Rule${i}_Driver[idx]<#if ip_sw_param_names?size != 0>, <#if ip_sw_param_names?size &gt; 1><#list 0..ip_sw_param_names?size-2 as i>${ip_sw_param_names[i]}, </#list></#if>${ip_sw_param_names[ip_sw_param_names?size-1]}</#if>);
            while(${ip_name}_Rule${i}Driver_isBusy(&${ip_name}_Rule${i}_Driver[idx]) == 1);
            return;
        }
    }
    
    </#list>
${ip_sw_name}(<#if ip_sw_param_names?size != 0><#if ip_sw_param_names?size &gt; 1><#list 0..ip_sw_param_names?size-2 as i>${ip_sw_param_names[i]}, </#list></#if>${ip_sw_param_names[ip_sw_param_names?size-1]}</#if>);    
#endif
}








