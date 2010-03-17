<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ec_glances_content_default_fields() {
  module_load_include('inc', 'ec_glances', 'ec_glances.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_glances_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ec_glances_ctools_plugin_api() {
  module_load_include('inc', 'ec_glances', 'ec_glances.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_glances_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_feeds_importer_default().
 */
function ec_glances_feeds_importer_default() {
  module_load_include('inc', 'ec_glances', 'ec_glances.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_glances_feeds_importer_default', $args);
}

/**
 * Implementation of hook_node_info().
 */
function ec_glances_node_info() {
  module_load_include('inc', 'ec_glances', 'ec_glances.features.node');
  $args = func_get_args();
  return call_user_func_array('_ec_glances_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function ec_glances_strongarm() {
  module_load_include('inc', 'ec_glances', 'ec_glances.defaults');
  $args = func_get_args();
  return call_user_func_array('_ec_glances_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function ec_glances_views_default_views() {
  module_load_include('inc', 'ec_glances', 'ec_glances.features.views');
  $args = func_get_args();
  return call_user_func_array('_ec_glances_views_default_views', $args);
}
