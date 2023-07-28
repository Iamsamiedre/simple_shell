#include "shell.h"
<<<<<<< HEAD

/**
 * _myhistory - displays the history list, one command by line, preceded
 *              with line numbers, starting at 0.
 * @info: Structure containing potential arguments. Used to maintain
 *        constant function prototype.
 *  Return: Always 0
=======
/**
 * _myhistory - displays the history list, one command by line, preceded with line numbers, starting at 0.
 * @info: Structure containing potential arguments. Used to maintain constant function prototype.
 * Return: Always 0
>>>>>>> d5ecbe3152db8c688b5499035a2312adc353d094
 */
int _myhistory(info_t *info)
{
	print_list(info->history);
	return (0);
}

/**
 * unset_alias - sets alias to string
 * @info: parameter struct
 * @str: the string alias
<<<<<<< HEAD
 *
=======
>>>>>>> d5ecbe3152db8c688b5499035a2312adc353d094
 * Return: Always 0 on success, 1 on error
 */
int unset_alias(info_t *info, char *str)
{
	char *p, c;
	int ret;

	p = _strchr(str, '=');
	if (!p)
		return (1);
	c = *p;
	*p = 0;
	ret = delete_node_at_index(&(info->alias),
<<<<<<< HEAD
		get_node_index(info->alias, node_starts_with(info->alias, str, -1)));
=======
			get_node_index(info->alias, node_starts_with(info->alias, str, -1)));
>>>>>>> d5ecbe3152db8c688b5499035a2312adc353d094
	*p = c;
	return (ret);
}

/**
 * set_alias - sets alias to string
 * @info: parameter struct
 * @str: the string alias
<<<<<<< HEAD
 *
=======
>>>>>>> d5ecbe3152db8c688b5499035a2312adc353d094
 * Return: Always 0 on success, 1 on error
 */
int set_alias(info_t *info, char *str)
{
	char *p;

	p = _strchr(str, '=');
	if (!p)
		return (1);
	if (!*++p)
		return (unset_alias(info, str));
<<<<<<< HEAD

=======
>>>>>>> d5ecbe3152db8c688b5499035a2312adc353d094
	unset_alias(info, str);
	return (add_node_end(&(info->alias), str, 0) == NULL);
}

/**
 * print_alias - prints an alias string
 * @node: the alias node
<<<<<<< HEAD
 *
=======
>>>>>>> d5ecbe3152db8c688b5499035a2312adc353d094
 * Return: Always 0 on success, 1 on error
 */
int print_alias(list_t *node)
{
	char *p = NULL, *a = NULL;
<<<<<<< HEAD

=======
>>>>>>> d5ecbe3152db8c688b5499035a2312adc353d094
	if (node)
	{
		p = _strchr(node->str, '=');
		for (a = node->str; a <= p; a++)
<<<<<<< HEAD
=======
			
>>>>>>> d5ecbe3152db8c688b5499035a2312adc353d094
		_putchar(*a);
		_putchar('\'');
		_puts(p + 1);
		_puts("'\n");
		return (0);
	}
	return (1);
}

/**
 * _myalias - mimics the alias builtin (man alias)
<<<<<<< HEAD
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 *  Return: Always 0
=======
 * @info: Structure containing potential arguments. Used to maintain constant function prototype.
 * Return: Always 0
>>>>>>> d5ecbe3152db8c688b5499035a2312adc353d094
 */
int _myalias(info_t *info)
{
	int i = 0;
	char *p = NULL;
	list_t *node = NULL;

	if (info->argc == 1)
	{
		node = info->alias;
		while (node)
		{
			print_alias(node);
			node = node->next;
		}
		return (0);
	}
	for (i = 1; info->argv[i]; i++)
	{
		p = _strchr(info->argv[i], '=');
		if (p)
			set_alias(info, info->argv[i]);
		else
			print_alias(node_starts_with(info->alias, info->argv[i], '='));
	}
<<<<<<< HEAD

=======
>>>>>>> d5ecbe3152db8c688b5499035a2312adc353d094
	return (0);
}
