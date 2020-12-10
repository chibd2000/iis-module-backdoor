# coding=utf-8

import cmd
import requests


class Mycmd(cmd.Cmd):
    pass


class MyExcept(Exception):
    @staticmethod
    def error():
        pass


class Exploit(object):
    def toShellcode(self):
        pass

    def toCommand(self):
        pass


class Client(object):
    def __init__(self):
        self.exp = Exploit()

    def signToShellcode(self):
        self.exp.toShellcode()

    def signToCommand(self):
        self.exp.toCommand()


if __name__ == '__main__':
    pass