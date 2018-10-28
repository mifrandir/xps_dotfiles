function fish_prompt --description "Write out the prompt"
    set -l color_cwd
    set -l suffix
    switch "$USER"
        case root toor
            if set -q fish_color_cwd_root
                set color_cwd --bold red
            else
                set color_cwd $fish_color_cwd
            end
            set suffix '=>'
        case '*'
            set color_cwd --bold green
            set suffix '->'
    end

    echo -n -s (set_color $color_cwd) (prompt_pwd) (set_color yellow)  " $suffix " (set_color normal)
end