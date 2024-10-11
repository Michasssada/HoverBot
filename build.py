import configparser
import subprocess
from colorama import init, Fore, Style

init(autoreset=True)

def execute_commands(commands):
    full_command = " && ".join(commands)
    try:
        result = subprocess.run(f"bash -c '{full_command}'", shell=True, check=True, text=True, capture_output=True)
        output = result.stdout.splitlines()
        for line in output:
            if line:
                print(Fore.GREEN + line) 
    except subprocess.CalledProcessError as e:
        print(Fore.RED + f"Error: {e.stderr}")

def main():
    config = configparser.ConfigParser()
    config.read('build.conf')
    sections = config.sections()

    print("Choose a build option:\n")
    for i, section in enumerate(sections, start=1):
        print(f"{i}. {section}")

    selection_index = int(input(f"\nSelect option (1-{len(sections)}): ")) - 1

    if selection_index < 0 or selection_index >= len(sections):
        print(Fore.RED + "\nInvalid option selected.")
        return

    section = sections[selection_index]
    print(Fore.YELLOW + f"\nSelected build: {section}\n")

    commands = [config[section][cmd_key] for cmd_key in config[section]]
    execute_commands(commands)

    input(Fore.YELLOW + "\nPress Enter to exit.")

if __name__ == '__main__':
    main()
