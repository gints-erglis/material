import { MDCRipple } from '@material/ripple';

(function(Drupal, window) {
  'use strict';

  /**
   * Upgrade all components.
   */
  Drupal.behaviors.materialDesignInitButton = {
    attach: function(context) {
      const buttons = document.querySelector('.js-mdc-button');
      const fabs = document.querySelector('.mdc-fab');

      if (buttons) {
        const ripple = new MDCRipple(buttons);
      }
      if (fabs) {
        const fabRipple = new MDCRipple(fabs);
      }

    }
  };
})(Drupal, this);