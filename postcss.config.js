module.exports = {
  plugins: {
    'postcss-cssnext': {
      features: {
        customProperties: {
          preserve: false,
          warnings: false
        },
        rem: false,
        nesting: false
      }
    },
    'postcss-discard-comments': {}
  }
};
