<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _ec_glances_node_info() {
  $items = array(
    'glance' => array(
      'name' => t('Glance'),
      'module' => 'features',
      'description' => t('A <em>glance</em> is suitable for your Master at a Glance page and it will contain all static information regarding the master course.
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'glance_details' => array(
      'name' => t('Glance Details'),
      'module' => 'features',
      'description' => t('<em>Glance Details</em> content type contains information changing according the provenience of the student.
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'glance_details_feed' => array(
      'name' => t('Glance Details Feed'),
      'module' => 'features',
      'description' => t('Feed which generates nodes of type "glance_details". It is created by the "master" importer and contains a link to the remote XML file of the glance details at the Master Template.	'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'glance_feed' => array(
      'name' => t('Glance Feed'),
      'module' => 'features',
      'description' => t('Feed which generates nodes of type "glance". It is created by the "master" importer and contains a link to the remote XML file of the glance at the Master Template.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
