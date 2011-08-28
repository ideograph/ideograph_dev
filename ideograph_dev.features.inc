<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ideograph_dev_context_default_contexts() {
  module_load_include('inc', 'ideograph_dev', 'ideograph_dev.defaults');
  $args = func_get_args();
  return call_user_func_array('_ideograph_dev_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ideograph_dev_ctools_plugin_api() {
  module_load_include('inc', 'ideograph_dev', 'ideograph_dev.defaults');
  $args = func_get_args();
  return call_user_func_array('_ideograph_dev_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function ideograph_dev_strongarm() {
  module_load_include('inc', 'ideograph_dev', 'ideograph_dev.defaults');
  $args = func_get_args();
  return call_user_func_array('_ideograph_dev_strongarm', $args);
}
