<?php
/**
 * @file
 * gsb_feature_insights_quote_fpp.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_insights_quote_fpp_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_author|fieldable_panels_pane|insights_quote|default';
  $field_group->group_name = 'group_wrapper_author';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'insights_quote';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Author wrapper',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Author wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_author|fieldable_panels_pane|insights_quote|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Author wrapper');

  return $field_groups;
}
