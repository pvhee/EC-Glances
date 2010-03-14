<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _ec_glances_content_default_fields() {
  $fields = array();

  // Exported field: field_master_applicationdeadline
  $fields[] = array(
    'field_name' => 'field_master_applicationdeadline',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '26',
      'parent' => 'group_master_date',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
      'second' => 'second',
    ),
    'timezone_db' => 'Europe/Brussels',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => '',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'j M Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Application Deadline',
      'weight' => '26',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_master_applicationpagelink
  $fields[] = array(
    'field_name' => 'field_master_applicationpagelink',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '57',
      'parent' => 'group_master_programme',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Application Page Link',
      'weight' => '57',
      'description' => 'Link to the page where students can apply for the master. Use the full address, starting with <tt>http</tt>; for example, <tt>http://www.youthagora.org</tt>. ',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_master_badge
  $fields[] = array(
    'field_name' => 'field_master_badge',
    'type_name' => 'glance',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Badge',
      'weight' => '3',
      'description' => 'Upload a representative image for the master, it will be displayed on the homepage.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_master_careeropportunities
  $fields[] = array(
    'field_name' => 'field_master_careeropportunities',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '64',
      'parent' => 'group_master_programme',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_careeropportunities][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Career Opportunities',
      'weight' => '64',
      'description' => 'Explain the career opportunities for your Master graduates, and possible placement activities. ',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_master_contactemail
  $fields[] = array(
    'field_name' => 'field_master_contactemail',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '69',
      'parent' => 'group_master_contact',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '0',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Contact Email',
      'weight' => '69',
      'description' => '',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_master_contactperson
  $fields[] = array(
    'field_name' => 'field_master_contactperson',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '65',
      'parent' => 'group_master_contact',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_contactperson][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Contact Person',
      'weight' => '65',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_master_contactphone
  $fields[] = array(
    'field_name' => 'field_master_contactphone',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '70',
      'parent' => 'group_master_contact',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => 60,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Contact Phone',
      'weight' => '70',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_master_contactpicture
  $fields[] = array(
    'field_name' => 'field_master_contactpicture',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '68',
      'parent' => 'group_master_contact',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Contact Person Picture',
      'weight' => '68',
      'description' => 'Upload the contact person picture here.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_master_contactposition
  $fields[] = array(
    'field_name' => 'field_master_contactposition',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '66',
      'parent' => 'group_master_contact',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_contactposition][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Contact Person Position',
      'weight' => '66',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_master_coursesdesc
  $fields[] = array(
    'field_name' => 'field_master_coursesdesc',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '53',
      'parent' => 'group_master_courses',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_coursesdesc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Courses Description',
      'weight' => '53',
      'description' => 'Write a short description of courses here, in a few lines. If you need more text, you can specify a link or upload a file below. ',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_master_coursesdescf
  $fields[] = array(
    'field_name' => 'field_master_coursesdescf',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '55',
      'parent' => 'group_master_courses',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => '',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Courses Description File',
      'weight' => '55',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_master_coursesdescl
  $fields[] = array(
    'field_name' => 'field_master_coursesdescl',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '54',
      'parent' => 'group_master_courses',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Courses Description Link',
      'weight' => '54',
      'description' => 'You can specify a link for further information here. Use the full address, starting with <tt>http</tt>; for example, <tt>http://www.youthagora.org</tt>. ',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_master_curriculumname
  $fields[] = array(
    'field_name' => 'field_master_curriculumname',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => 'group_master_studyarea',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_curriculumname][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Curriculum Name',
      'weight' => '-1',
      'description' => 'Specify the full name of your Master programme here. Limit the "Master Name" field, above it, to three words or less. ',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_master_degreeawarded
  $fields[] = array(
    'field_name' => 'field_master_degreeawarded',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '24',
      'parent' => 'group_master_accreditation',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Bachelor|Bachelor\'s Degree
Master|Master\'s Degree
Doctoral|Doctoral Degree
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Degree Awarded',
      'weight' => '24',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_master_ects
  $fields[] = array(
    'field_name' => 'field_master_ects',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '23',
      'parent' => 'group_master_accreditation',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => 'ECTS',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_ects][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'ECTS',
      'weight' => '23',
      'description' => 'The number of credits according to the <a href="http://ec.europa.eu/education/lifelong-learning-policy/doc48_en.htm">ECTS</a> system. ',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_master_educationalreq
  $fields[] = array(
    'field_name' => 'field_master_educationalreq',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '29',
      'parent' => 'group_master_requirements',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_educationalreq][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Educational Requirements',
      'weight' => '29',
      'description' => 'Write a short description of educational requirements here, in a few lines. If you need more text, you can specify a link or upload a file below. ',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_master_educationalreqf
  $fields[] = array(
    'field_name' => 'field_master_educationalreqf',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '32',
      'parent' => 'group_master_requirements',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => '',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Educational Requirements File',
      'weight' => '32',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_master_educationalreql
  $fields[] = array(
    'field_name' => 'field_master_educationalreql',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '30',
      'parent' => 'group_master_requirements',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Educational Requirements Link',
      'weight' => '30',
      'description' => 'You can specify a link for further information here. Use the full address, starting with <tt>http</tt>; for example, <tt>http://www.youthagora.org</tt>. ',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_master_facebook
  $fields[] = array(
    'field_name' => 'field_master_facebook',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_master_social',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => 'ext',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Facebook',
      'weight' => '8',
      'description' => 'Provide here a link to your Facebook page or group, for example <code>http://www.facebook.com/pages/Youth-Agora/98835488975</code>',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_master_file
  $fields[] = array(
    'field_name' => 'field_master_file',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '1',
      'parent' => 'group_master_media',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'txt doc rtf docx odt xls xlsx ods ppt pps pptx odp pdf zip rar tar gz bz2',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'File',
      'weight' => '1',
      'description' => 'You can upload a flyer of your programme here.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_master_fulltime
  $fields[] = array(
    'field_name' => 'field_master_fulltime',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '63',
      'parent' => 'group_master_programme',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Full|Full Time
Part|Part Time',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Full/Part time',
      'weight' => '63',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_master_grandparentref
  $fields[] = array(
    'field_name' => 'field_master_grandparentref',
    'type_name' => 'glance',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'master' => 'master',
      'feed' => 0,
      'feed_2' => 0,
      'feed_item2' => 0,
      'feed_item' => 0,
      'glance' => 0,
      'glance_details' => 0,
      'glance_feed' => 0,
      'image' => 0,
      'master_feed' => 0,
      'page' => 0,
      'partner' => 0,
      'story' => 0,
      'xml_item' => 0,
    ),
    'advanced_view' => '',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_master_grandparentref][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Master',
      'weight' => '2',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_master_image
  $fields[] = array(
    'field_name' => 'field_master_image',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '2',
      'parent' => 'group_master_media',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'jpg jpeg png gif',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '2',
      'description' => 'Upload some images.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_master_language
  $fields[] = array(
    'field_name' => 'field_master_language',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '62',
      'parent' => 'group_master_programme',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_language][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Language',
      'weight' => '62',
      'description' => 'Language in which the Master course is taught. ',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_master_languageereqf
  $fields[] = array(
    'field_name' => 'field_master_languageereqf',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '35',
      'parent' => 'group_master_requirements',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => '',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Language Requirements File',
      'weight' => '35',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_master_languageereql
  $fields[] = array(
    'field_name' => 'field_master_languageereql',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '34',
      'parent' => 'group_master_requirements',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Language Requirements Link',
      'weight' => '34',
      'description' => 'You can specify a link for further information here. Use the full address, starting with <tt>http</tt>; for example, <tt>http://www.youthagora.org</tt>. ',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_master_languagereq
  $fields[] = array(
    'field_name' => 'field_master_languagereq',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '33',
      'parent' => 'group_master_requirements',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_languagereq][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Language Requirements',
      'weight' => '33',
      'description' => 'Write a short description of language requirements here, on a few lines. If you need more text, you can specify a link or upload a file below. ',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_master_linkedin
  $fields[] = array(
    'field_name' => 'field_master_linkedin',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '9',
      'parent' => 'group_master_social',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => 'ext',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'LinkedIn',
      'weight' => '9',
      'description' => 'Provide here a link to your LinkedIn group, for example <code>http://www.linkedin.com/groupInvitation?groupID=1561787&sharedKey=7E2923283363</code>',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_master_master_details
  $fields[] = array(
    'field_name' => 'field_master_master_details',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '67',
      'parent' => 'group_master_fees',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'glance_details' => 'glance_details',
      'book' => 0,
      'complete_task' => 0,
      'feed' => 0,
      'image' => 0,
      'glance' => 0,
      'news' => 0,
      'page' => 0,
      'partner' => 0,
      'profile' => 0,
      'setting' => 0,
      'story' => 0,
    ),
    'advanced_view' => '',
    'advanced_view_args' => '',
    'widget' => array(
      'enable_feed_title' => 1,
      'enable_feed_item_title' => NULL,
      'enable_feed_item_field_grandparentref' => NULL,
      'enable_image_title' => 1,
      'enable_feed_2_title' => NULL,
      'enable_feed_item2_title' => NULL,
      'enable_glance_title' => NULL,
      'enable_glance_field_master_curriculumname' => NULL,
      'enable_glance_field_master_studyfields' => NULL,
      'enable_glance_field_master_shortdesc' => NULL,
      'enable_glance_field_master_ects' => NULL,
      'enable_glance_field_master_degreeawarded' => NULL,
      'enable_glance_field_master_studyperiod' => NULL,
      'enable_glance_field_master_qualitystatement' => NULL,
      'enable_glance_field_master_educationalreq' => NULL,
      'enable_glance_field_master_qualitystatementl' => NULL,
      'enable_glance_field_master_educationalreql' => NULL,
      'enable_glance_field_master_languagereq' => NULL,
      'enable_glance_field_master_languageereql' => NULL,
      'enable_glance_field_master_otherreq' => NULL,
      'enable_glance_field_master_otherreql' => NULL,
      'enable_glance_field_master_applicationpagelink' => NULL,
      'enable_glance_field_master_programmedesc' => NULL,
      'enable_glance_field_master_programmedescl' => NULL,
      'enable_glance_field_master_language' => NULL,
      'enable_glance_field_master_fulltime' => NULL,
      'enable_glance_field_master_careeropportunities' => NULL,
      'enable_glance_details_title' => NULL,
      'enable_glance_details_field_master_details_origin' => NULL,
      'enable_glance_details_field_master_details_tuitionfees' => NULL,
      'enable_glance_details_field_master_details_financial' => NULL,
      'enable_glance_details_field_master_details_scolarlink' => NULL,
      'enable_master_feed_title' => NULL,
      'enable_page_title' => 1,
      'enable_story_title' => 1,
      'enable_xml_item_title' => NULL,
      'label' => 'Details',
      'weight' => '67',
      'description' => '',
      'type' => 'node_widget_node_form',
      'module' => 'node_widget',
    ),
  );

  // Exported field: field_master_monthlyexpenses
  $fields[] = array(
    'field_name' => 'field_master_monthlyexpenses',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '70',
      'parent' => 'group_master_fees',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '€',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_monthlyexpenses][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Monthly expenses',
      'weight' => '70',
      'description' => 'Average monthly expenses for living costs and accommodation. ',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_master_othercosts
  $fields[] = array(
    'field_name' => 'field_master_othercosts',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '69',
      'parent' => 'group_master_fees',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '€',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_othercosts][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Other Costs',
      'weight' => '69',
      'description' => 'Other Master costs besides tuition fees. ',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_master_otherreq
  $fields[] = array(
    'field_name' => 'field_master_otherreq',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '36',
      'parent' => 'group_master_requirements',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_otherreq][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Other Requirements',
      'weight' => '36',
      'description' => 'Write a short description of other admission requirements here, on a few lines. If you need more text, you can specify a link or upload a file below. ',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_master_otherreqf
  $fields[] = array(
    'field_name' => 'field_master_otherreqf',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '38',
      'parent' => 'group_master_requirements',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => '',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Other Requirements File',
      'weight' => '38',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_master_otherreql
  $fields[] = array(
    'field_name' => 'field_master_otherreql',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '37',
      'parent' => 'group_master_requirements',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Other Requirements Link',
      'weight' => '37',
      'description' => 'You can specify a link for further information here. Use the full address, starting with <tt>http</tt>; for example, <tt>http://www.youthagora.org</tt>. ',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_master_programmedesc
  $fields[] = array(
    'field_name' => 'field_master_programmedesc',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '58',
      'parent' => 'group_master_programme',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_programmedesc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Programme Description',
      'weight' => '58',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_master_programmedescf
  $fields[] = array(
    'field_name' => 'field_master_programmedescf',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '61',
      'parent' => 'group_master_programme',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => '',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Programme Description File',
      'weight' => '61',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_master_programmedescl
  $fields[] = array(
    'field_name' => 'field_master_programmedescl',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '60',
      'parent' => 'group_master_programme',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Programme Description Link',
      'weight' => '60',
      'description' => 'You can specify a link for further information here. Use the full address, starting with <tt>http</tt>; for example, <tt>http://www.youthagora.org</tt>. ',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_master_programmewebsite
  $fields[] = array(
    'field_name' => 'field_master_programmewebsite',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '71',
      'parent' => 'group_master_contact',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => '',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Programme Website',
      'weight' => '71',
      'description' => 'You can specify a link for further information here. Use the full address, starting with <tt>http</tt>; for example, <tt>http://www.youthagora.org</tt>. ',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_master_qualitystatement
  $fields[] = array(
    'field_name' => 'field_master_qualitystatement',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '28',
      'parent' => 'group_master_accreditation',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_qualitystatement][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Quality Statement',
      'weight' => '28',
      'description' => 'If your Master programme has received a Quality Statement, such as a certification of quality by a national/international institutions, state it here in a few lines. If you need more text, you can specify a link or upload a file below. ',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_master_qualitystatementf
  $fields[] = array(
    'field_name' => 'field_master_qualitystatementf',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '30',
      'parent' => 'group_master_accreditation',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => '',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Quality Statement File',
      'weight' => '30',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_master_qualitystatementl
  $fields[] = array(
    'field_name' => 'field_master_qualitystatementl',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '29',
      'parent' => 'group_master_accreditation',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Quality Statement Link',
      'weight' => '29',
      'description' => 'You can specify a link for further information here. Use the full address, starting with <tt>http</tt>; for example, <tt>http://www.youthagora.org</tt>. ',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_master_shortdesc
  $fields[] = array(
    'field_name' => 'field_master_shortdesc',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_shortdesc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Short description',
      'weight' => '4',
      'description' => 'A short description of the master course; it will be shown on the homepage.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_master_startingdate
  $fields[] = array(
    'field_name' => 'field_master_startingdate',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '23',
      'parent' => 'group_master_date',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => '',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'j M Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Starting date',
      'weight' => '23',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_master_studyfields
  $fields[] = array(
    'field_name' => 'field_master_studyfields',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => 0,
      'parent' => 'group_master_studyarea',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '/**
 * Insert this code in the phpfilter of the content type \'Master\'
 */
$ya_xml_resources = array(\'http://europeancampus.eu/xml/study_fields.xml\');
$ya_xml_local_file = file_directory_path().\'/\'.\'study_fields.xml\';

if(file_exists($ya_xml_local_file)) array_unshift($ya_xml_resources, $ya_xml_local_file);

$ya_xml = false;
foreach($ya_xml_resources as $ya_xml_resource) {
  $ya_xml = @simplexml_load_file($ya_xml_resource, \'SimpleXMLElement\', LIBXML_NOCDATA);
  if($ya_xml) break;
}

if($ya_xml) {
  foreach($ya_xml->node as $item) {
    $elements[\'study_field\'] = (string) $item->study_field;

    $ya_list[$elements[\'study_field\']] = $elements[\'study_field\'];
  }
  return $ya_list;
} else {
  return array();
}',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Study Field',
      'weight' => 0,
      'description' => 'Classification according to the <a href="http://www.unesco.org/education/information/nfsunesco/doc/isced_1997.htm">UNESCO ISCED</a>.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_master_studyperiod
  $fields[] = array(
    'field_name' => 'field_master_studyperiod',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '24',
      'parent' => 'group_master_date',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' year| years',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_studyperiod][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Study Period',
      'weight' => '24',
      'description' => 'Duration of the Master course, in years.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_master_twitter
  $fields[] = array(
    'field_name' => 'field_master_twitter',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '11',
      'parent' => 'group_master_social',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Twitter',
      'weight' => '11',
      'description' => 'Provide here a link to your Twitter account, for example <code>http://www.twitter.com/youthagora</code>',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_master_video
  $fields[] = array(
    'field_name' => 'field_master_video',
    'type_name' => 'glance',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_master_media',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '1',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '425',
      'video_height' => '350',
      'video_autoplay' => '',
      'preview_width' => '273',
      'preview_height' => '226',
      'preview_autoplay' => '',
      'thumbnail_width' => '130',
      'thumbnail_height' => '100',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'providers' => array(
        '1' => 1,
        '0' => 1,
        'archive' => FALSE,
        'bliptv' => FALSE,
        'google' => FALSE,
        'lastfm' => FALSE,
        'livevideo' => FALSE,
        'myspace' => FALSE,
        'twistage' => FALSE,
        'ustream' => FALSE,
        'ustreamlive' => FALSE,
        'vimeo' => FALSE,
        'voicethread' => FALSE,
        'youtube' => FALSE,
        'zzz_custom_url' => FALSE,
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video',
      'weight' => '4',
      'description' => '',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Exported field: field_details_grandparentref
  $fields[] = array(
    'field_name' => 'field_details_grandparentref',
    'type_name' => 'glance_details',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'master' => 'master',
      'feed' => 0,
      'feed_2' => 0,
      'feed_item2' => 0,
      'feed_item' => 0,
      'glance' => 0,
      'glance_details' => 0,
      'glance_details_feed' => 0,
      'glance_feed' => 0,
      'image' => 0,
      'master_feed' => 0,
      'page' => 0,
      'partner' => 0,
      'partner_feed' => 0,
      'story' => 0,
      'xml_item' => 0,
    ),
    'advanced_view' => '',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_details_grandparentref][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Master ',
      'weight' => '8',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_master_details_application
  $fields[] = array(
    'field_name' => 'field_master_details_application',
    'type_name' => 'glance_details',
    'display_settings' => array(
      'weight' => '22',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
      'second' => 'second',
    ),
    'timezone_db' => 'Europe/Brussels',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => '',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'j M Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Application Deadline',
      'weight' => '10',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_master_details_financial
  $fields[] = array(
    'field_name' => 'field_master_details_financial',
    'type_name' => 'glance_details',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Available|available
  NotAvailable|not available',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Scholarships',
      'weight' => '12',
      'description' => 'Financial aid available in the form of scholarships or teaching assistantships. Write only a few lines here. If you need more text, you can specify a link or upload a file below. ',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_master_details_origin
  $fields[] = array(
    'field_name' => 'field_master_details_origin',
    'type_name' => 'glance_details',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'available_options' => 'Inside EEA
Outside EEA',
      'other' => 'Other',
      'other_unknown_defaults' => 'other',
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Student Origin',
      'weight' => '9',
      'description' => '',
      'type' => 'select_or_other',
      'module' => 'select_or_other',
    ),
  );

  // Exported field: field_master_details_scolarlink
  $fields[] = array(
    'field_name' => 'field_master_details_scolarlink',
    'type_name' => 'glance_details',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Scolarship Link',
      'weight' => '13',
      'description' => 'You can specify a link for further information here. Use the full address, starting with <tt>http</tt>; for example, <tt>http://www.youthagora.org</tt>. ',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_master_details_tuitionfees
  $fields[] = array(
    'field_name' => 'field_master_details_tuitionfees',
    'type_name' => 'glance_details',
    'display_settings' => array(
      'weight' => '36',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '€',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_master_details_tuitionfees][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Tuition Fees',
      'weight' => '11',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Translatables
  array(
    t('Application Deadline'),
    t('Application Page Link'),
    t('Badge'),
    t('Career Opportunities'),
    t('Contact Email'),
    t('Contact Person'),
    t('Contact Person Picture'),
    t('Contact Person Position'),
    t('Contact Phone'),
    t('Courses Description'),
    t('Courses Description File'),
    t('Courses Description Link'),
    t('Curriculum Name'),
    t('Degree Awarded'),
    t('Details'),
    t('ECTS'),
    t('Educational Requirements'),
    t('Educational Requirements File'),
    t('Educational Requirements Link'),
    t('Facebook'),
    t('File'),
    t('Full/Part time'),
    t('Image'),
    t('Language'),
    t('Language Requirements'),
    t('Language Requirements File'),
    t('Language Requirements Link'),
    t('LinkedIn'),
    t('Master'),
    t('Master '),
    t('Monthly expenses'),
    t('Other Costs'),
    t('Other Requirements'),
    t('Other Requirements File'),
    t('Other Requirements Link'),
    t('Programme Description'),
    t('Programme Description File'),
    t('Programme Description Link'),
    t('Programme Website'),
    t('Quality Statement'),
    t('Quality Statement File'),
    t('Quality Statement Link'),
    t('Scholarships'),
    t('Scolarship Link'),
    t('Short description'),
    t('Starting date'),
    t('Student Origin'),
    t('Study Field'),
    t('Study Period'),
    t('Tuition Fees'),
    t('Twitter'),
    t('Video'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _ec_glances_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  else if ($module == "system" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_feeds_importer_default().
 */
function _ec_glances_feeds_importer_default() {
  $export = array();
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'glance';
  $feeds_importer->config = array(
    'name' => 'Glance',
    'description' => 'Import XML file of Master at a Glance',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXMLParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'glance',
        'update_existing' => 1,
        'expire' => '-1',
        'mappings' => array(
          '0' => array(
            'source' => 'nid',
            'target' => 'guid',
            'unique' => 1,
          ),
          '1' => array(
            'source' => 'field_master_careeropportunities',
            'target' => 'field_master_careeropportunities',
            'unique' => FALSE,
          ),
          '2' => array(
            'source' => 'field_master_applicationdeadline',
            'target' => 'field_master_applicationdeadline:start',
            'unique' => FALSE,
          ),
          '3' => array(
            'source' => 'field_master_coursesdesc',
            'target' => 'field_master_coursesdesc',
            'unique' => FALSE,
          ),
          '4' => array(
            'source' => 'field_master_ects',
            'target' => 'field_master_ects',
            'unique' => FALSE,
          ),
          '5' => array(
            'source' => 'field_master_image',
            'target' => 'field_master_image',
            'unique' => FALSE,
          ),
          '6' => array(
            'source' => 'field_master_contactemail',
            'target' => 'field_master_contactemail',
            'unique' => FALSE,
          ),
          '7' => array(
            'source' => 'field_master_video',
            'target' => 'field_master_video',
            'unique' => FALSE,
          ),
          '8' => array(
            'source' => 'master',
            'target' => 'field_master_grandparentref',
            'unique' => FALSE,
          ),
          '9' => array(
            'source' => 'field_master_applicationpagelink',
            'target' => 'field_master_applicationpagelink:url',
            'unique' => FALSE,
          ),
          '10' => array(
            'source' => 'field_master_badge',
            'target' => 'field_master_badge',
            'unique' => FALSE,
          ),
          '11' => array(
            'source' => 'field_master_contactperson',
            'target' => 'field_master_contactperson',
            'unique' => FALSE,
          ),
          '12' => array(
            'source' => 'field_master_contactpicture',
            'target' => 'field_master_contactpicture',
            'unique' => FALSE,
          ),
          '13' => array(
            'source' => 'field_master_contactposition',
            'target' => 'field_master_contactposition',
            'unique' => FALSE,
          ),
          '14' => array(
            'source' => 'field_master_contactphone',
            'target' => 'field_master_contactphone',
            'unique' => FALSE,
          ),
          '15' => array(
            'source' => 'field_master_coursesdescf',
            'target' => 'field_master_coursesdescf',
            'unique' => FALSE,
          ),
          '16' => array(
            'source' => 'field_master_coursesdescl',
            'target' => 'field_master_coursesdescl:url',
            'unique' => FALSE,
          ),
          '17' => array(
            'source' => 'field_master_curriculumname',
            'target' => 'field_master_curriculumname',
            'unique' => FALSE,
          ),
          '18' => array(
            'source' => 'field_master_degreeawarded',
            'target' => 'field_master_degreeawarded',
            'unique' => FALSE,
          ),
          '19' => array(
            'source' => 'field_master_ects',
            'target' => 'field_master_ects',
            'unique' => FALSE,
          ),
          '20' => array(
            'source' => 'field_master_educationalreq',
            'target' => 'field_master_educationalreq',
            'unique' => FALSE,
          ),
          '21' => array(
            'source' => 'field_master_educationalreqf',
            'target' => 'field_master_educationalreqf',
            'unique' => FALSE,
          ),
          '22' => array(
            'source' => 'field_master_educationalreql',
            'target' => 'field_master_educationalreql:url',
            'unique' => FALSE,
          ),
          '23' => array(
            'source' => 'field_master_facebook',
            'target' => 'field_master_facebook:url',
            'unique' => FALSE,
          ),
          '24' => array(
            'source' => 'field_master_file',
            'target' => 'field_master_file',
            'unique' => FALSE,
          ),
          '25' => array(
            'source' => 'field_master_fulltime',
            'target' => 'field_master_fulltime',
            'unique' => FALSE,
          ),
          '26' => array(
            'source' => 'field_master_image',
            'target' => 'field_master_image',
            'unique' => FALSE,
          ),
          '27' => array(
            'source' => 'field_master_language',
            'target' => 'field_master_language',
            'unique' => FALSE,
          ),
          '28' => array(
            'source' => 'field_master_languagereq',
            'target' => 'field_master_languagereq',
            'unique' => FALSE,
          ),
          '29' => array(
            'source' => 'field_master_languageereqf',
            'target' => 'field_master_languageereqf',
            'unique' => FALSE,
          ),
          '30' => array(
            'source' => 'field_master_languageereql',
            'target' => 'field_master_languageereql:url',
            'unique' => FALSE,
          ),
          '31' => array(
            'source' => 'field_master_linkedin',
            'target' => 'field_master_linkedin:url',
            'unique' => FALSE,
          ),
          '32' => array(
            'source' => 'field_master_monthlyexpenses',
            'target' => 'field_master_monthlyexpenses',
            'unique' => FALSE,
          ),
          '33' => array(
            'source' => 'field_master_othercosts',
            'target' => 'field_master_othercosts',
            'unique' => FALSE,
          ),
          '34' => array(
            'source' => 'field_master_otherreq',
            'target' => 'field_master_otherreq',
            'unique' => FALSE,
          ),
          '35' => array(
            'source' => 'field_master_otherreqf',
            'target' => 'field_master_otherreqf',
            'unique' => FALSE,
          ),
          '36' => array(
            'source' => 'field_master_otherreql',
            'target' => 'field_master_otherreql:url',
            'unique' => FALSE,
          ),
          '37' => array(
            'source' => 'field_master_programmedesc',
            'target' => 'field_master_programmedesc',
            'unique' => FALSE,
          ),
          '38' => array(
            'source' => 'field_master_programmedescf',
            'target' => 'field_master_programmedescf',
            'unique' => FALSE,
          ),
          '39' => array(
            'source' => 'field_master_programmedescl',
            'target' => 'field_master_programmedescl:url',
            'unique' => FALSE,
          ),
          '40' => array(
            'source' => 'field_master_programmewebsite',
            'target' => 'field_master_programmewebsite:url',
            'unique' => FALSE,
          ),
          '41' => array(
            'source' => 'field_master_qualitystatement',
            'target' => 'field_master_qualitystatement',
            'unique' => FALSE,
          ),
          '42' => array(
            'source' => 'field_master_qualitystatementf',
            'target' => 'field_master_qualitystatementf',
            'unique' => FALSE,
          ),
          '43' => array(
            'source' => 'field_master_qualitystatementl',
            'target' => 'field_master_qualitystatementl:url',
            'unique' => FALSE,
          ),
          '44' => array(
            'source' => 'field_master_shortdesc',
            'target' => 'field_master_shortdesc',
            'unique' => FALSE,
          ),
          '45' => array(
            'source' => 'field_master_startingdate',
            'target' => 'field_master_startingdate:start',
            'unique' => FALSE,
          ),
          '46' => array(
            'source' => 'field_master_studyfields',
            'target' => 'field_master_studyfields',
            'unique' => FALSE,
          ),
          '47' => array(
            'source' => 'field_master_studyperiod',
            'target' => 'field_master_studyperiod',
            'unique' => FALSE,
          ),
          '48' => array(
            'source' => 'field_master_twitter',
            'target' => 'field_master_twitter:url',
            'unique' => FALSE,
          ),
          '49' => array(
            'source' => 'field_master_video',
            'target' => 'field_master_video',
            'unique' => FALSE,
          ),
          '50' => array(
            'source' => 'field_master_curriculumname',
            'target' => 'title',
            'unique' => FALSE,
          ),
          '51' => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
          ),
          '52' => array(
            'source' => 'link',
            'target' => 'url',
            'unique' => FALSE,
          ),
        ),
      ),
    ),
    'content_type' => 'glance_feed',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );

  $export['glance'] = $feeds_importer;
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'glance_details';
  $feeds_importer->config = array(
    'name' => 'Glance Details',
    'description' => 'Import XML file of Master Glance Details',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXMLParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'glance_details',
        'update_existing' => 1,
        'expire' => '-1',
        'mappings' => array(
          '0' => array(
            'source' => 'nid',
            'target' => 'guid',
            'unique' => 1,
          ),
          '1' => array(
            'source' => 'field_master_details_origin',
            'target' => 'title',
            'unique' => FALSE,
          ),
          '2' => array(
            'source' => 'field_master_details_application',
            'target' => 'field_master_details_application:start',
            'unique' => FALSE,
          ),
          '3' => array(
            'source' => 'field_master_details_scolarlink',
            'target' => 'field_master_details_financial',
            'unique' => FALSE,
          ),
          '4' => array(
            'source' => 'field_master_details_origin',
            'target' => 'field_master_details_origin',
            'unique' => FALSE,
          ),
          '5' => array(
            'source' => 'field_master_details_tuitionfees',
            'target' => 'field_master_details_tuitionfees',
            'unique' => FALSE,
          ),
          '6' => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
          ),
          '7' => array(
            'source' => 'link',
            'target' => 'url',
            'unique' => FALSE,
          ),
        ),
      ),
    ),
    'content_type' => 'glance_details_feed',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );

  $export['glance_details'] = $feeds_importer;
  return $export;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _ec_glances_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_glance';
  $strongarm->value = '0';

  $export['comment_glance'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_glance_details';
  $strongarm->value = '0';

  $export['comment_glance_details'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_glance_details_feed';
  $strongarm->value = '0';

  $export['comment_glance_details_feed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_glance_feed';
  $strongarm->value = '0';

  $export['comment_glance_feed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_glance';
  $strongarm->value = array(
    '0' => 'status',
    '1' => 'promote',
  );

  $export['node_options_glance'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_glance_details';
  $strongarm->value = array(
    '0' => 'status',
    '1' => 'promote',
  );

  $export['node_options_glance_details'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_glance_details_feed';
  $strongarm->value = array();

  $export['node_options_glance_details_feed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_glance_feed';
  $strongarm->value = array();

  $export['node_options_glance_feed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_glance_details_feed_pattern';
  $strongarm->value = 'glance-details-feed/[nid]';

  $export['pathauto_node_glance_details_feed_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_glance_details_pattern';
  $strongarm->value = 'glance-details/[nid]';

  $export['pathauto_node_glance_details_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_glance_feed_pattern';
  $strongarm->value = 'glance-feed/[nid]';

  $export['pathauto_node_glance_feed_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_glance_pattern';
  $strongarm->value = 'glance/[nid]';

  $export['pathauto_node_glance_pattern'] = $strongarm;
  return $export;
}
