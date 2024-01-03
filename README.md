# C++ Template

A [Cookiecutter](https://cookiecutter.readthedocs.io/en/latest/) template for C++ projects.

## Usage

In order to start a new project, [install Cookiecutter](https://cookiecutter.readthedocs.io/en/latest/installation.html) and run the following command:

```bash
$ cookiecutter https://github.com/sgvillafranca/cpp-template.git
```

## Variables

Variables allow to customize your project. When running the previous command, you will be prompted to fill in the following values:

- _**project_name**_: Name of the project. This variable will also be used to create the default value for the project slug.
- _**project_slug**_: URL friendly name of the project. It is recommended to keep the default value.
- _**project_short_description**_: Short description of the project.
- _**version**_: Initial version of the project. If using a different value from the default, please follow [Semantic Versioning](https://semver.org/) recommendations.
- _**cpp_standard**_: C++ standard to use for compilation. Available values are C++17 (default), C++14 and C++11.
- _**full_name**_: Full name of the main maintainer of the project.
- _**email**_: Contact email of the main maintainer of the project.

## Contributing

If you want to contribute to this template, feel free to do so! Create a new branch to work in, and open a pull request when you are done! It will be reviewed and merged into master by one of the maintainers as soon as possible.
